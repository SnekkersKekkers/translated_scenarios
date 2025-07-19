BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040722202_07_000");
MsgDisp("Mikage","How is it, there are discoveries that you
wouldn't notice in a textbook right?");
MsgSel("seems like it would be difficult to control the temperature and humidity","It's surprisingly big for a koban coin.","Thw admission fee is one rich.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040722202_07_010");
    MsgDisp("Mikage","That's it.
You wouldn't know unless you saw it for
yourself in person.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040722202_07_020");
    MsgDisp("Mikage","Good discovery.
Look at that oban coin over there.
It's huge, isn't it?～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040722202_07_030");
        MsgDisp("Mikage","I paid for it all just now.
Don't worry about it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040722202_07_040");
        MsgDisp("Mikage","This is Sensei's treat.
You guys just make sure you get your
money's worth.");
        MsgDisp("主人公","But, this is a school expense isn't it?");
        ChEye(7,2);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("B040722202_07_050");
        MsgDisp("Mikage","No?
Don't think you've got the upper hand with
that.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,1);
        VoicePlay("B040722202_07_060");
        MsgDisp("Mikage","Until the advance payment is calculated,
it's practically my treat.");
        MsgDisp("主人公","Hehe.
｛御影＊＊｝, thank you very much.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("B040722202_07_070");
        MsgDisp("Mikage","Alright, alright.
Just be grateful for today.");
        MsgDisp("主人公","That's pretty short-lived isn't it?");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040722202_07_080");
        MsgDisp("Mikage","This month is a tight one.
...What are you trying to say?");
        MsgDisp("主人公","(Hehe, ｛御影＊＊｝'s field trips are
fun.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
