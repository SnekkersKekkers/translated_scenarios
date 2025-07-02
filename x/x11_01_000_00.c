switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100000_01_000");
    MsgDisp("Kazama","Looks like the baseball team won?
That's great.");
    MsgDisp("主人公","Thank you. It would make me happy if I was
able to help them win.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X110100000_01_010");
    MsgDisp("Kazama","No doubt about it.
Without you, I don't think
they could have played.");
    MsgDisp("主人公","(Fu fu, he's exagerating.
But that makes me happy!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("X110100000_01_020");
    MsgDisp("Kazama","I heard the baseball club won the practice
match?");
    MsgDisp("主人公","Yes, with a dramatic home-run victory!");
    VoicePlay("X110100000_01_030");
    MsgDisp("Kazama","Thanks for your hard work, team manager.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("X110100000_01_040");
    MsgDisp("Kazama","I don't know what the players think, but
I think you're hitting it out of the park.");
    MsgDisp("主人公","(｛風真＊＊｝ was pleased.
I'm glad I did my best as a manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
