SEPlay("EV_SE_663");
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030500000_05_000");
    MsgDisp("Hiiragi","Hiiragi here.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝?
It's ｛主人公苗字｝.");
    VoicePlay("S030500000_05_010");
    MsgDisp("Hiiragi","Oh.
Happy New Year to you.");
    MsgDisp("主人公","Yep, Happy New Year!
Hey, are you going to visit the shrine?");
    break ;
    case 3:
    VoicePlay("S030500000_05_020");
    MsgDisp("Hiiragi","Hiiragi here.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝?
｛主人公苗字｝ here.
Happy New Year!");
    VoicePlay("S030500000_05_030");
    MsgDisp("Hiiragi","Happy New Year. Holiday Greeting Cards are
good but talking directly like this is
also good, isn't it?");
    MsgDisp("主人公","Hehe, yep.
I wonder if we can go to the shrine
together.");
    break ;
    case 4:
    case 5:
    VoicePlay("S030500000_05_040");
    MsgDisp("Hiiragi","Hello.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝?
I...");
    VoicePlay("S030500000_05_050");
    MsgDisp("Hiiragi","Yup. Happy New Year. I'm looking forward
to spending time with you again this year.");
    MsgDisp("主人公","Same here! ｛柊＊＊＊｝, do you
have time today? Would you like to visit
the shrine?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
