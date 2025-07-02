BGOpen("sc623",0);
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
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    VoicePlay("H380200000_02_000");
    MsgDisp("Sassa","That's a good expression.
You're getting into it, huh");
    MsgDisp("主人公","｛颯砂＊＊｝.
Did you come to cheer me on?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H380200000_02_010");
    MsgDisp("Sassa","I was a little worried that you'd
be getting nervous, but looks like it's
just me.");
    MsgDisp("主人公","Hehe, geez......
I'm nervous too, you know?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("H380200000_02_020");
    MsgDisp("Sassa","Haha, I see.
Well, it looks like I can look forward
to this. Go have fun.");
    MsgDisp("主人公","Yeah.
｛颯砂＊＊｝, thanks for coming!");
    MsgDisp("主人公","(Alright, now I just have to
give it everything I have!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
