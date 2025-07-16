switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110200002_02_000");
    MsgDisp("Sassa","In a practice match, I heard that you got
a cool single-point win in a practice
match. Congratulations.");
    MsgDisp("主人公","Yeah, thanks!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("X110200002_02_010");
    MsgDisp("Sassa","I see you are training hard and working
hard.
I can't lose either.");
    MsgDisp("主人公","(Yay, ｛颯砂＊＊｝ praised me!
Let's practice harder!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("X110200002_02_020");
    MsgDisp("Sassa","｛主人公｝, I heard you
won all of your practice matches by one
point? That's amazing.");
    MsgDisp("主人公","Yeah, thank you ｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("X110200002_02_030");
    MsgDisp("Sassa","It's cool that you care about winning too.
Let's work hard for each other.");
    MsgDisp("主人公","(I can't believe ｛颯砂＊＊｝
praised me, I'm glad I won ......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
