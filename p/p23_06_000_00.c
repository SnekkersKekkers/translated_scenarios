BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(It's starting already......
turns out I really am anxious.)");
    VoicePlay("P230600000_06_000");
    MsgDisp("Himuro?","Relax.");
    MsgClose();
    SEPlay("EV_SE_544",0,0.5);
    ChOpen(6,38,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Eh...ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P230600000_06_010");
    MsgDisp("Himuro","You've practiced a lot, haven't you?
So, you'll be fine if you do it just as
you always have.");
    MsgDisp("主人公","Yeah, that's right...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P230600000_06_020");
    MsgDisp("Himuro","Still nervous? 
Then...give me your hand.");
    MsgDisp("主人公","My hand?");
    ChClose(6,0,30);
    ChLayout(0);
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(6,38,2,0,0,#1,#1,0,0);
    SEPlay("EV_SE_504");
    SEWait();
    VoicePlay("P230600000_06_030");
    MsgDisp("Himuro","...I thought so, they're cold.
You can't stay calm like this.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,2);
    VoicePlay("P230600000_06_040");
    MsgDisp("Himuro","It's alright.
I'm the same.");
    MsgDisp("主人公","｛氷室＊＊｝... yeah, thank you.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("P230600000_06_050");
    MsgDisp("Himuro","Don't mention it.
I feel as though you've given me some
strength too.");
    VoicePlay("P230600000_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    ChCheek(6,0);
    VoicePlay("P230600000_06_060");
    MsgDisp("Himuro","Finally.
Let's go.");
    MsgDisp("主人公","...Yeah!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(6,0,0);
