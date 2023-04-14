#include "training.h"
#include "ui_training.h"
#include <QDebug>
#include <QMovie>

training::training(Communicate *com,QJsonObject JSON,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::training)
{
    SelfName = JSON["userName"].toString();
    SelfRank = JSON["grade"].toString();
    ui->setupUi(this);
    QString m_user = QString("用户名：%1    段位：%2").arg(SelfName).arg(SelfRank);
    ui->username->setText(m_user);
    _com = com;

    winSound = new QSound(":/pic/win.wav", this);
    loseSound = new QSound(":/pic/lose.wav", this);

    // 排位定时器
    connect(&RankTimer,SIGNAL(timeout()),this,SLOT(RankTimerOut()));
    // 个人训练定时器
    connect(&_singleTimer,SIGNAL(timeout()),this,SLOT(singleTimerOut()));
    // 个人训练题目
    connect(_com,SIGNAL(receiveSingleQuestion(QJsonObject)),this,SLOT(receiveSingleQuestion(QJsonObject)));
    // 排位匹配题目
    connect(_com,SIGNAL(Rank(QJsonObject)),this,SLOT(Rank(QJsonObject)));
}

training::~training()
{
    delete ui;
}


//个人训练获取题目
void training::singleGetQuestion()
{
    _com->writeData(kindjson);
}

//设置个人训练题目
void training::singleSetQuestion()
{
    if(singleQuestionFlag == QUESTION_NUM)
    {
        _singleTimer.stop();  // 关闭计时器
        // 显示成绩
        ui->single_Result->setText("恭喜你，全部回答正确");
        QString str = QString("本次得分：%1").arg(_singleScore);
        ui->single_Result_Score->setText(str);
        ui->stackedWidget->setCurrentWidget(ui->single_score);
        return;
    }
    ui->single_question->setText(_singleQuestionJson["question"].toArray().at(singleQuestionFlag).toString());
    ui->single_SelectButton_one->setText(_singleQuestionJson["selection1"].toArray().at(singleQuestionFlag).toString());
    ui->single_SelectButton_two->setText(_singleQuestionJson["selection2"].toArray().at(singleQuestionFlag).toString());
    ui->single_SelectButton_three->setText(_singleQuestionJson["selection3"].toArray().at(singleQuestionFlag).toString());
    ui->single_SelectButton_four->setText(_singleQuestionJson["selection4"].toArray().at(singleQuestionFlag).toString());
}

//个人训练答题
void training::singleAnswerQuestion(int select)
{
    //回答正确
    if(select == _singleQuestionJson["answer"].toArray().at(singleQuestionFlag).toString().toInt())
    {
        winSound->play();

        _singleScore += 10 * _singleSec;

        singleQuestionFlag++;
        singleSetQuestion();
        _singleSec = QUESTIONTIME;
        _singleTimer.stop();
        ui->lcdNumber->display(_singleSec);
        _singleTimer.start(1000);
    }
    else
    {
        loseSound->play();
        ui->single_Result->setText("很遗憾，回答错误");
        QString str = QString("本次得分：%1").arg(_singleScore);
        ui->single_Result_Score->setText(str);
        _singleTimer.stop();
        ui->stackedWidget->setCurrentWidget(ui->single_score);
    }
}

//接收个人训练题目
void training::receiveSingleQuestion(QJsonObject json)
{
    _singleQuestionJson = json;
    singleQuestionFlag = 0;
    _singleScore = 0;
    _singleSec = QUESTIONTIME;
    ui->lcdNumber->display(_singleSec);
    singleSetQuestion();
    //开启定时器
    _singleTimer.start(1000);
    ui->stackedWidget->setCurrentWidget(ui->single_running);
}

// 个人训练 计时器
void training::singleTimerOut()
{
    --_singleSec;
    if(singleQuestionFlag <= (QUESTION_NUM - 1))
    {
        if(0 >= _singleSec)
        {
            _singleTimer.stop();
            ui->stackedWidget->setCurrentWidget(ui->single_score);
            ui->single_Result->setText("很遗憾，回答错误");
            QString str = QString("本次得分：%1").arg(_singleScore);
            ui->single_Result_Score->setText(str);
        }
    }
    ui->lcdNumber->display(_singleSec);
}

//个人训练
void training::on_singleButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->select_menu);
}


void training::on_chinese_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->single_menu);
    kindjson["cmd"] = GETCHIQUESTION;
}

void training::on_math_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->single_menu);
    kindjson["cmd"] = GETMATHQUESTION;
}

void training::on_english_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->single_menu);
    kindjson["cmd"] = GETENGQUESTION;
}

void training::on_back_to_main_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}

void training::on_single_back_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->select_menu);
}

void training::on_single_start_clicked()
{
    singleGetQuestion();
}

void training::on_single_SelectButton_one_clicked()
{
    singleAnswerQuestion(1);
}

void training::on_single_SelectButton_two_clicked()
{
    singleAnswerQuestion(2);
}

void training::on_single_SelectButton_three_clicked()
{
    singleAnswerQuestion(3);
}

void training::on_single_SelectButton_four_clicked()
{
    singleAnswerQuestion(4);
}

void training::on_singnal_score_backButton_clicked()
{
    ui->single_score->close();
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}

/*--------------------排位赛rank-------------------*/
void training::RankTimerOut()
{
    --RankSec;

    if(RankSec == 0)
    {
        if(ui->rankSelectButton1->isEnabled())
        {
            CurrentRankQuestion++;
        }
        RankSetQuestion();
        RankSec = QUESTIONTIME;
    }
    ui->lcdNumber_2->display(RankSec);
}

// 自己的对战信息
void training::SetSelfLineInfo()
{
    QString str = QString("%1(%2) %3").arg(SelfName,-5).arg(SelfRank).arg(SelfScore);
    ui->selfScore->setText(str);
}

// 对手的对战信息
void training::SetEnemyLineInfo()
{
    QString str = QString("%1(%2) %3").arg(EnemyName,-5).arg(EnemyRank).arg(EnemyScore);
    ui->enemyScore->setText(str);
}

// 排位设置问题
void training::RankSetQuestion()
{
    ui->rankQuestion->setText(RankQuestion["question"].toArray().at(CurrentRankQuestion).toString());
    ui->rankSelectButton1->setText(RankQuestion["selection1"].toArray().at(CurrentRankQuestion).toString());
    ui->rankSelectButton2->setText(RankQuestion["selection2"].toArray().at(CurrentRankQuestion).toString());
    ui->rankSelectButton3->setText(RankQuestion["selection3"].toArray().at(CurrentRankQuestion).toString());
    ui->rankSelectButton4->setText(RankQuestion["selection4"].toArray().at(CurrentRankQuestion).toString());

    ui->rankSelectButton1->setEnabled("true");
    ui->rankSelectButton2->setEnabled("true");
    ui->rankSelectButton3->setEnabled("true");
    ui->rankSelectButton4->setEnabled("true");

    ui->rankSelectButton1->setStyleSheet("");
    ui->rankSelectButton2->setStyleSheet("");
    ui->rankSelectButton3->setStyleSheet("");
    ui->rankSelectButton4->setStyleSheet("");

    if(CurrentRankQuestion == QUESTION_NUM - 1)
    {
        //将结果发送给服务器
        RankTimer.stop();
        QJsonObject json;
        json["cmd"] = RANKRESULT;
        json["score"] = SelfScore;
        json["enemyName"] = EnemyName;
        json["enemyScore"] = EnemyScore;
        _com->writeData(json);
    }
}

// 点击进入排位赛
void training::on_rankButton_clicked()
{
    QJsonObject json;
    json["cmd"] = RANK;
    _com->writeData(json);

    //跳转到等待页面
    ui->stackedWidget->setCurrentWidget(ui->rank_wait);
    //设置loading动图
    QMovie *movie = new QMovie("../client/pic/loading.gif");
    ui->loading->setMovie(movie);
    movie->start();

}

// 开始排位
void training::Rank(QJsonObject json)
{
    int result_rank = json["cmd"].toInt();
    if(result_rank == RANK)
    {
        RankQuestion = json["question"].toObject();
        EnemyName = json["enemyName"].toString();
        EnemyRank = json["enemyRank"].toString();
        EnemyScore = json["enemyScore"].toInt();

        RankSec = QUESTIONTIME;
        SelfScore = 0;
        CurrentRankQuestion = 0;
        ui->lcdNumber_2->display(RankSec);

        SetSelfLineInfo();
        SetEnemyLineInfo();
        RankSetQuestion();

        RankTimer.start(1000);
        ui->stackedWidget->setCurrentWidget(ui->rank_running);

    }
    else if(result_rank == ANSWER)
    {
       EnemyScore = json["enemyScore"].toInt();
       EnemyRankQueston = json["enemyQuestionId"].toInt();
       SetEnemyLineInfo();
       if(EnemyRankQueston == CurrentRankQuestion)
       {
           RankSec = QUESTIONTIME;
           RankTimer.stop();
           ui->lcdNumber_2->display(RankSec);
           RankTimer.start(1000);
           RankSetQuestion();
       }
    }
    else if(result_rank == RANKRESULT)
    {
        //处理排位结果
        RankSetResult(json);
    }
}

// 处理排位结果
void training::RankSetResult(QJsonObject json)
{
    QString newRank = json["newRank"].toString();
    if(SelfScore == EnemyScore)
    {
        ui->RankResult->setText("平局");
    }
    else if(SelfScore < EnemyScore)
    {
        ui->RankResult->setText("失败");
    }
    else if(SelfScore > EnemyScore)
    {
        ui->RankResult->setText("成功");
    }
    QString str = QString("%1 --> %2").arg(SelfRank).arg(newRank);
    ui->NewRank->setText(str);
    SelfRank = newRank;

    ui->stackedWidget->setCurrentWidget(ui->rank_Result);
}

// 排位答题
void training::RankAnswerQuestion(int select)
{
    //计算得分
    if(select == RankQuestion["answer"].toArray().at(CurrentRankQuestion).toString().toInt())
    {
        SelfScore += 20 * RankSec;
    }
    SetSelfLineInfo();
    CurrentRankQuestion++;
    //判断是否进入下一题
    if(EnemyRankQueston == CurrentRankQuestion)
    {
        RankSec = QUESTIONTIME;
        RankTimer.stop();
        ui->lcdNumber_2->display(RankSec);
        RankTimer.start(1000);
        RankSetQuestion();
    }

    QJsonObject json;
    json["cmd"] = ANSWER;
    json["enemyName"] = EnemyName;
    json["score"] = SelfScore;
    json["questionId"] = CurrentRankQuestion;
    _com->writeData(json);
}

void training::on_rankSelectButton1_clicked()
{
    ui->rankSelectButton1->setStyleSheet("color : rgb(0, 170, 255)");
    ui->rankSelectButton1->setEnabled(false);
    ui->rankSelectButton2->setEnabled(false);
    ui->rankSelectButton3->setEnabled(false);
    ui->rankSelectButton4->setEnabled(false);
    RankAnswerQuestion(1);
}

void training::on_rankSelectButton2_clicked()
{
    ui->rankSelectButton2->setStyleSheet("color : rgb(0, 170, 255)");
    ui->rankSelectButton1->setEnabled(false);
    ui->rankSelectButton2->setEnabled(false);
    ui->rankSelectButton3->setEnabled(false);
    ui->rankSelectButton4->setEnabled(false);
    RankAnswerQuestion(2);
}

void training::on_rankSelectButton3_clicked()
{
    ui->rankSelectButton3->setStyleSheet("color : rgb(0, 170, 255)");
    ui->rankSelectButton1->setEnabled(false);
    ui->rankSelectButton2->setEnabled(false);
    ui->rankSelectButton3->setEnabled(false);
    ui->rankSelectButton4->setEnabled(false);
    RankAnswerQuestion(3);
}

void training::on_rankSelectButton4_clicked()
{
    ui->rankSelectButton4->setStyleSheet("color : rgb(0, 170, 255)");
    ui->rankSelectButton1->setEnabled(false);
    ui->rankSelectButton2->setEnabled(false);
    ui->rankSelectButton3->setEnabled(false);
    ui->rankSelectButton4->setEnabled(false);
    RankAnswerQuestion(4);
}


void training::on_pushButton_clicked()
{
    ui->rank_Result->close();
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}


void training::on_cancel_clicked()
{
    QJsonObject json;
    json["cmd"] = CANCEL;
    _com->writeData(json); // 发送取消排位请求
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}
