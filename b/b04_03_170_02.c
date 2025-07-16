BGOpen("ne340",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040317002_03_000");
MsgDisp("Honda","Did you know that if you score 100 points
in karaoke, you get one hour free?");
MsgSel("The scoring criteria is pretty vague...","Alright, let's get it!","｛本多＊＊｝, you always get a perfect score right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040317002_03_010");
    MsgDisp("Honda","Gotcha.
The scoring system sounds interesting.
Let's examine that first.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040317002_03_020");
    MsgDisp("Honda","It'd be a pain if I scored too many 100s,
no? We wouldn't be able to leave if I won
that many free hours.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040317002_03_030");
        MsgDisp("Honda","Are you referring to school tests perhaps?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040317002_03_040");
        MsgDisp("Honda","Haha, it's way different from taking a
test.");
        MsgDisp("主人公","Hehe, but ｛本多＊＊｝ doesn't
suit anything less than 100 points.");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040317002_03_050");
        MsgDisp("Honda","Alright, I accept the challenge.
Any requests?");
        SEPlay("EV_SE_547",0,0.5);
        MsgClose();
        ScrFadeOut(0);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        SEWait();
        BGMPlay("BGM_KARAOKE_PUNK",0.01,0.8);
        Wait(150,1);
        BGMStop(3);
        MsgClose();
        Wait(90,0);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        SEPlay("EV_SE_768",0,0.6);
        ScrFadeIn(0);
        VoicePlay("B040317002_03_060");
        MsgDisp("Honda","No matter how many times I try...
I can't do it.
Alright, next song.");
        MsgDisp("主人公","Um, how about we take a short break?");
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,1);
        VoicePlay("B040317002_03_070");
        MsgDisp("Honda","No. I can't fail you. That's the one thing
I absolutely won't do.");
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040317002_03_080");
        MsgDisp("Honda","Your wishes mean more to me than anything
else.
I'm not gonna stop till I get that 100!");
        BGMPlay("BGM_KARAOKE_JPOP",0.01,0.8);
        Wait(30,1);
        MsgDisp("主人公","Really!?");
        Wait(30,1);
        ChClose(3);
        MsgDisp("主人公","(Is ｛本多＊＊｝ secretly
competitive?)");
        MsgClose();
        BGMStop();
        MsgClose();
        ScrFadeOut(0);
        ChOpen(3,255,0,0,0,#1,#1,0,0,0,0);
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
