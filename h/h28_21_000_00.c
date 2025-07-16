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
    ChMotion(21,3);
    VoicePlay("H282100000_21_000");
    MsgDisp("Michiru","Mari, I found you.");
    MsgDisp("主人公","Hm?
｛みちる＊｝, you came to
support us?");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H282100000_21_010");
    MsgDisp("Michiru","Right.
It's Mari and the rest of the talented
track team's glorious show.");
    MsgDisp("主人公","Hehe, the team will be so happy, too!");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("H282100000_21_020");
    MsgDisp("Michiru","I'll be cheering you on from my seat in
the audience.
Good luck.");
    MsgDisp("主人公","(Alright.
I have to do my best, too!)");
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
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("H282100000_21_030");
    MsgDisp("Michiru","Mari.
I came to support you.");
    MsgDisp("主人公","｛みちる＊｝!
Thank you, everyone in the team will be
grateful too.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H282100000_21_040");
    MsgDisp("Michiru","Hehe.
But, the person I'll be cheering most for
is Mari.");
    MsgDisp("主人公","Hm?");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("H282100000_21_050");
    MsgDisp("Michiru","Haba High's track team has always been
strong. That's why I'll be cheering for
Mari, who's supporting the team.");
    MsgDisp("主人公","Thank you, ｛みちる＊｝.");
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H282100000_21_060");
    MsgDisp("Michiru","Yeah, fight on!");
    MsgDisp("主人公","(Alright, for
｛みちる＊｝ too, let's
do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(21,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
