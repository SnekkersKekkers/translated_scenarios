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
    VoicePlay("H482100000_21_000");
    MsgDisp("Michiru","Mari, I came to support you.");
    MsgDisp("主人公","Ah, ｛みちる＊｝. Thanks!
I'm rivals with
｛ひかる＊｝ now,
though......");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("H482100000_21_010");
    MsgDisp("Michiru","Hehe, I'm looking forward to that, too.");
    MsgDisp("主人公","Haa......
I need to do my best!");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H482100000_21_020");
    MsgDisp("Michiru","That's the spirit.
I'll be cheering both of you on.");
    MsgDisp("主人公","(Alright.
Let's give the best performance ever!)");
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
    VoicePlay("H482100000_21_030");
    MsgDisp("Michiru","Mari.
Are you ready?");
    MsgDisp("主人公","Ah, ｛みちる＊｝.
Did you come to cheer me on?");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,3);
    VoicePlay("H482100000_21_040");
    MsgDisp("Michiru","Right? Are you nervous? Nervousness is the
enemy of a beautiful performance.");
    MsgDisp("主人公","Y-Yeah.
I'm fine......!");
    ChClose(21);
    ChLayout(0);
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(21,254,5,4,4,#1,#1,0,0);
    VoicePlay("H482100000_21_050");
    MsgDisp("Michiru","Geez. You're not fine at all. Here, give
me your hand. And close your eyes.");
    MsgDisp("主人公","My hands?
...... Okay.");
    MsgClose();
    ScrFadeOut(0);
    VoicePlay("H482100000_21_060");
    MsgDisp("Michiru","Please, give Mari courage......
May the goddess of victory watch over her.");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,0);
    MsgDisp("主人公","(｛みちる＊｝'s hands are so warm......)");
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("H482100000_21_070");
    MsgDisp("Michiru","...... Well?
Are you feeling more relaxed?");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(｛みちる＊｝, thank you!
Alright, I have to give the best
performance ever!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(21,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
