switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("X110200003_02_000");
    MsgDisp("Sassa","｛主人公｝,
I heard that you got a perfect score.
At a rhythmic gymnastics practice match.");
    MsgDisp("主人公","Yeah, thanks. It's a joint practice with
another school, though.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("X110200003_02_010");
    MsgDisp("Sassa","That's good. If you can do it in practice,
you can do it in the real thing. Let's
both do our best!");
    MsgDisp("主人公","(I'm glad I practiced hard.
I'll work harder!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("X110200003_02_020");
    MsgDisp("Sassa","｛主人公｝, Congratulations! I heard that
you've decided on a great new move.");
    MsgDisp("主人公","Thank you ｛颯砂＊＊｝,
though it's a joint practice.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("X110200003_02_030");
    MsgDisp("Sassa","I'd like to go and support you to see your
new technique, But it's not safe if
someone like me is peeking in ......");
    MsgDisp("主人公","Huh, that's not true, though, ｛颯砂＊＊｝
must be busy with track and field
practice, right?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("X110200003_02_040");
    MsgDisp("Sassa","Well, you're right ......
But I always support you in heart!");
    MsgDisp("主人公","(Yay!
t's nice to be cheered on by ｛颯砂＊＊｝ )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
