BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H180200000_02_000");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Did you come to cheer us on?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("H180200000_02_010");
    MsgDisp("Sassa","Yeah, I came to see the Haba High Nine
and your brave figure.");
    MsgDisp("主人公","Yeah, thanks.
We'll do our best!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("H180200000_02_020");
    MsgDisp("Sassa","They have the goddess of victory sitting
on their bench. You'll definitely win.");
    MsgDisp("主人公","(Alright, I'll do my best until
the end as manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
