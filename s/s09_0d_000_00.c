BGOpen("ex050",0);
ChLayout(1);
MsgClose();
ChOpen(21,255,7,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("S090D00000_22_000");
MsgDisp("Hikaru","Mari, tell me your wish? ♪");
MsgDisp("主人公","Huh?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("S090D00000_21_000");
MsgDisp("Michiru","Hikaru.");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,1,1);
ChEyeOpenLevel(22,8);
VoicePlay("S090D00000_22_010");
MsgDisp("Hikaru","Tsk.
Big Sis is being mean...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("S090D00000_21_010");
MsgDisp("Michiru","More importantly, want to do that?
Fortunes.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("S090D00000_22_020");
MsgDisp("Hikaru","Fortunes?
That sounds great, let's all do it!♪");
MsgSel("Sure, let's go!","Not interested.");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("S090D00000_21_020");
    MsgDisp("Michiru","Drawing fortunes on New Years is a good
goal to have, right?");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("S090D00000_22_030");
    MsgDisp("Hikaru","Don't take it so seriously.
Just have fun▼");
    MsgDisp("主人公","(I wish us good luck!)");
    break ;
    case 1:
    ChEye(22,0);
    ChMouth(22,5);
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,10);
    VoicePlay("S090D00000_22_040");
    MsgDisp("Hikaru","Ehー∋
You don't want to get your fortune?");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("S090D00000_21_030");
    MsgDisp("Michiru","Okay, let's move on then.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
