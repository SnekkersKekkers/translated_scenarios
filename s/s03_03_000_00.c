switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_663");
    SEWait();
    VoicePlay("S030300000_03_000");
    MsgDisp("Honda","Hello?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝?
Happy New Year.");
    VoicePlay("S030300000_03_010");
    MsgDisp("Honda","Happy New Year!
Good luck this year too.");
    MsgDisp("主人公","This year, we're together again.
Would you like to go to the shrine with
me?");
    break ;
    case 3:
    SEPlay("EV_SE_663");
    SEWait();
    VoicePlay("S030300000_03_020");
    MsgDisp("Honda","Hello?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝?
Happy New Year.");
    VoicePlay("S030300000_03_030");
    MsgDisp("Honda","Happy New Year!
Let's treat each other well this year!");
    MsgDisp("主人公","Yep.
Let's meet up a lot this year.
Would you like to visit the shrine?");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_663");
    SEWait();
    VoicePlay("S030300000_03_040");
    MsgDisp("Honda","Happy New Year!");
    MsgDisp("主人公","Hehe!
Happy New Year.");
    VoicePlay("S030300000_03_050");
    MsgDisp("Honda","I wanted to say it first.
But somehow you rang me first.");
    MsgDisp("主人公","Hehe.
Hey, if it's okay with you, would you like
to visit the shrine together?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
