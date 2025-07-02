BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040506102_05_000");
MsgDisp("Hiiragi","What is that..
that delicious smelll...");
MsgSel("There are people broiling freshly caught seafood","I think it's the beach house yakisoba","MAybe I put on too much sunlotion?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040506102_05_010");
    MsgDisp("Hiiragi","They catch it at sea,
then eat it right away?
...seems fun.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040506102_05_020");
    MsgDisp("Hiiragi","Heeh...
Hey, why don't we go?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040506102_05_030");
        MsgDisp("Hiiragi","That might be why your
body is shining immensely.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,3);
        ChMouth(5,2);
        VoicePlay("B040506102_05_040");
        MsgDisp("Hiiragi","Eh...
your scent∋");
        ChEye(5,2);
        ChMotion(5,2);
        ChCheek(5,7);
        VoicePlay("B040506102_05_050");
        MsgDisp("Hiiragi","I apologize.
S-saying it smelt delicious...
What was I saying...");
        MsgDisp("主人公","Umm,
don't pay too much mind to that.");
        ChEyeOpenLevel(5,0);
        VoicePlay("B040506102_05_060");
        MsgDisp("Hiiragi","Haa...");
        MsgDisp("主人公","｛柊＊＊＊｝, your face is red.
Are you alright?");
        SEPlay("EV_SE_557");
        SEWait();
        ChClose(5,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(5,31,2,2,2,9,-1,10,0,0,30);
        VoicePlay("B040506102_05_070");
        MsgDisp("Hiiragi","Aah, I feel dizzy...
It's too radiant...");
        ChMouth(5,4);
        ChMotion(5,0);
        ChEyeOpenLevel(5,-1);
        VoicePlay("B040506102_05_080");
        MsgDisp("Hiiragi","You're shining even more 
than usual in that swimsuit.
In more ways than one.");
        MsgDisp("主人公","(Umm... did I put on too much sun lotion?)");
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
