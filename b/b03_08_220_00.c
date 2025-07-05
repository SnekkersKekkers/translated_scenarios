BGOpen("tr300",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B030822000_08_000");
MsgDisp("Shirahane","Sucha big and regal castle...");
MsgDisp("主人公","Yeah.
It's our city's number 1 pride.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,2,1);
VoicePlay("B030822000_08_010");
MsgDisp("Shirahane","I totally get that.
If I were a local, I'd be real proud too.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("B030822000_08_020");
MsgDisp("Shirahane","Alrighty then, where to?");
MsgSel("I want to see Habataki Tower.","Let's go to the Exhibition Corner.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("B030822000_08_030");
    MsgDisp("Shirahane","Heheh!
I really love heights!
Let's go!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B030822000_08_040");
    MsgDisp("Shirahane","Sounds good.
Let's study the history of Habataki City
real good.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
