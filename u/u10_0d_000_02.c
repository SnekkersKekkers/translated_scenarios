BGOpen("sc511",0);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
ScrFadeIn(0);
ChMotion(22,3,1);
VoicePlay("U100D00002_22_000");
MsgDisp("Hikaru","Hii～i, Mari▼
I found you!");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝.
What's up?");
ChMotion(22,4,1);
VoicePlay("U100D00002_22_010");
MsgDisp("Hikaru","You're free tomorrow, right?
How about we have a sleepover tonight?");
MsgSel("Ok, I'll go!","Sorry, I'm busy……");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(22,3);
    VoicePlay("U100D00002_21_000");
    MsgDisp("Michiru","Thank goodness.");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("U100D00002_22_020");
    MsgDisp("Hikaru","Okay!
I love Mari～▼");
    MsgDisp("主人公","Hehe!
Let's meet after school then.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("U100D00002_21_010");
    MsgDisp("Michiru","Let's do that.
Should we buy some snacks and drinks?");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("U100D00002_22_030");
    MsgDisp("Hikaru","Yupyup!
See you after school～♪");
    MsgClose();
    SEPlay("EV_SE_856");
    BGMStop();
    ChClose(21,0,30);
    ChClose(22,0,30);
    MsgDisp("主人公","(A sleepover......I'm excited!)");
    break ;
    case 1:
    ChEye(22,2);
    ChMouth(22,1);
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("U100D00002_21_020");
    MsgDisp("Michiru","If you're busy, I guess it can't
be helped.");
    ChEye(22,2);
    ChMouth(22,2);
    ChMotion(22,2,1);
    VoicePlay("U100D00002_22_040");
    MsgDisp("Hikaru","Siigh......
I wanted to have girl talk......");
    MsgClose();
    SEPlay("EV_SE_856");
    BGMStop();
    ChClose(21,0,30);
    ChClose(22,0,30);
    MsgDisp("主人公","(Even though they went through
all that trouble to invite me......
Maybe I made the wrong choice?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
