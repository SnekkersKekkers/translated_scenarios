BGOpen("tr510",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040824102_08_000");
MsgDisp("Shirahane","Apparently some bigger farms run
a side business alongside farming
and manage things on a larger scale.");
MsgSel("Seems like that requires lots of different skills.","That's more profitable right?","Seems like they leave nothing undone...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,3,1);
    VoicePlay("B040824102_08_010");
    MsgDisp("Shirahane","Seems like it.
You not only need technical skills, 
but management skills too, I'm sure
it's a heavy responsibility.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(8,0,1);
    VoicePlay("B040824102_08_020");
    MsgDisp("Shirahane","That's right.
But, you need to put in the effort 
to make it succeed.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(8,2);
        ChMouth(8,4);
        VoicePlay("B040824102_08_030");
        MsgDisp("Shirahane","Well, it's no good
if you expand without
thinking about it...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,0);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040824102_08_040");
        MsgDisp("Shirahane","That's right...
To be successful, ordinary 
efforts aren't enough.");
        ChMotion(8,0,1);
        VoicePlay("B040824102_08_050");
        MsgDisp("Shirahane","That's why successful people aren't just
good at business, they must love their
work and take pride in it.");
        MsgDisp("主人公","I see...");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,4,1);
        ChMouthOpenLevel(8,0);
        VoicePlay("B040824102_08_060");
        MsgDisp("Shirahane","…………");
        MsgDisp("主人公","What's wrong?");
        ChEye(8,0);
        ChMouth(8,0);
        ChMotion(8,1,1);
        VoicePlay("B040824102_08_070");
        MsgDisp("Shirahane","Ah... it's nothing?");
        MsgDisp("主人公","？");
        ChEye(8,3);
        ChMouth(8,4);
        ChMotion(8,4,1);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040824102_08_080");
        MsgDisp("Shirahane","You can't be successful 
without having an objective.");
        ChEye(8,0);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040824102_08_090");
        MsgDisp("Shirahane","An objective, huh...?");
        MsgDisp("主人公","(｛大地＊＊｝ is lost in though.)");
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
