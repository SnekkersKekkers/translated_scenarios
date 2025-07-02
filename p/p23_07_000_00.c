BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,38,0,2,0,-1,-1,0,0);
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoiceEVSPlay(7);
    VoicePlay("P230700000_07_000");
    MsgDisp("Mikage","｛主人公｝.
...Can I really do it?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P230700000_07_010");
    MsgDisp("Mikage","Even if the leading actor is suddenly
absent...");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Xu Xiang's costume fits you.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P230700000_07_020");
    MsgDisp("Mikage","That's not it.
I accompanied the practices, 
so I memorized the lines though...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P230700000_07_030");
    MsgDisp("Mikage","Is it really okay...?");
    MsgDisp("主人公","Yes. The only person who remembers 
the lines is ｛御影＊＊｝.
I look forward to working with yoU!");
    VoicePlay("P230700000_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P230700000_07_040");
    MsgDisp("Mikage","Yeah, I got it.
we can't let everyone's hard work
until now go to waste...");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,-1);
ChMouth(7,-1);
