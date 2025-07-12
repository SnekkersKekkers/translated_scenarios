BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,3,3,3,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200000_02_000");
    MsgDisp("Sassa","Haha, you're surprisingly
strong, huh?
You did it!");
    MsgDisp("主人公","(I did it, I won!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200000_02_010");
    MsgDisp("Sassa","I was super into it too.
That was a good match!");
    MsgDisp("主人公","You came to support me?
Thanks!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("O020200000_02_020");
    MsgDisp("Sassa","Yeah, you were cool.
You're pretty strong, huh?");
    MsgDisp("主人公","(I did it, I won!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,3,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200000_02_030");
    MsgDisp("Sassa","You won, you won!
You did it!");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("O020200000_02_040");
    MsgDisp("Sassa","Huh.
Somehow, I feel like I'm
more happy than you?");
    MsgDisp("主人公","Huh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O020200000_02_050");
    MsgDisp("Sassa","Because, just seeing you working
hard, I feel like I get motivated, too.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("O020200000_02_060");
    MsgDisp("Sassa","This was just tug of war, right?
If you were in a race,
I might have lost my voice.");
    MsgDisp("主人公","(｛颯砂＊＊｝ is happy
like he just won himself.
I'm so happy......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
