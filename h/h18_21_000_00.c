switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H182100000_21_000");
    MsgDisp("Michiru","Hello.");
    MsgDisp("主人公","Oh, ｛みちる＊｝.
Did you come to support us?");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("H182100000_21_010");
    MsgDisp("Michiru","Yes. Mari and everyone else is
going to show up on this big stage,
after all. Right?");
    MsgDisp("主人公","It's the team that will actually
be playing, though.
I'll do my best to support them too!");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H182100000_21_020");
    MsgDisp("Michiru","Hehe, I'll be cheering you on.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(21,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H182100000_21_030");
    MsgDisp("Michiru","Hello, Mari.");
    MsgDisp("主人公","Oh, ｛みちる＊｝.
Did you come to support us?");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H182100000_21_040");
    MsgDisp("Michiru","Mari is here, after all.");
    MsgDisp("主人公","Hehe, I'm the manager, you know?
The members of the baseball team are
the ones doing their best.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H182100000_21_050");
    MsgDisp("Michiru","That's true, but the team wouldn't
be able to come together without such a
good manager, right?");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("H182100000_21_060");
    MsgDisp("Michiru","So, today I'm cheering for Mari, who's
doing her best for the baseball team.
It's fine if there's one person like 
that, right?");
    MsgDisp("主人公","Hehe!
Thank you, ｛みちる＊｝!");
    MsgDisp("主人公","(｛みちる＊｝ is cheering for me......!
Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(21,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
