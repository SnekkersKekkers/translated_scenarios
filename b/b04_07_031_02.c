BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B040703102_07_000");
MsgDisp("Mikage","Today is the last day to submit a report.
The theme is up to you, anything is
fineー.");
MsgSel("I'm sorry, but I forgot to bring something to write with","I'll do it on the correlation between the number of creatures kept and the number of visitors.","I'll do it on the Giant Isopods");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,0);
        ChMouth(7,4);
        ChMotion(7,1);
        VoicePlay("B040703102_07_010");
        MsgDisp("Mikage","That's funny,
but also pretty bad.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,4);
        ChMotion(7,5);
        VoiceEVSPlay(7);
        VoicePlay("B040703102_07_020");
        MsgDisp("Mikage","｛主人公｝, stay here for a bit.");
        MsgDisp("主人公","Y-yes. I'm sorry.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040703102_07_030");
        MsgDisp("Mikage","Everyone, 
feel free to look around.");
        SEPlay("EV_SE_566",1,0.6);
        SEPlay("EV_SE_FOOT_WALK_AWAY_MANY",0.1,0.3);
        Wait(70,0);
        SEStop("EV_SE_566",3);
        MsgClose();
        ScrFadeOut(0,0,45);
        ScrFadeIn(0);
        MsgDisp("主人公","｛御影＊＊｝, I'm sorry.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040703102_07_040");
        MsgDisp("Mikage","Don't apologize so much for nothing.
It's a waste.");
        MsgDisp("主人公","Eh?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,2);
        VoicePlay("B040703102_07_050");
        MsgDisp("Mikage","I'm also constantly apologising to 
Vice-Principal Himuro, after all.");
        MsgDisp("主人公","Hehe.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("B040703102_07_060");
        MsgDisp("Mikage","That's right. You should laugh.
You shouldn't apologize so excessively.
Only apologize when it's
absolutely necessary.");
        MsgDisp("主人公","Yes.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040703102_07_070");
        MsgDisp("Mikage","Then, come.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(7);
        VoicePlay("B040703102_07_080");
        MsgDisp("Mikage","I'll buy you a Giant Isopod pen set.");
        MsgDisp("主人公","(｛御影＊＊｝ is kind.
...But let's be more careful 
about forgetting things.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040703102_07_090");
    MsgDisp("Mikage","Aaah, right...
keep it within reason, okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,3);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040703102_07_100");
    MsgDisp("Mikage","You've got your eye on something good.
These guys can live five years without
food, so it's worth looking into.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
