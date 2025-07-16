switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030500002_05_000");
    MsgDisp("Hiiragi","Sorry.
The beginning of this year is pretty busy
for me...");
    MsgDisp("主人公","I see......
That's too bad.");
    VoicePlay("S030500002_05_010");
    MsgDisp("Hiiragi","Goodbye then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped......
Guess I'll go alone then.)");
    break ;
    case 3:
    VoicePlay("S030500002_05_020");
    MsgDisp("Hiiragi","Ahh......
I'm about to have dinner with the board
members.");
    MsgDisp("主人公","I see......that's too bad.");
    VoicePlay("S030500002_05_030");
    MsgDisp("Hiiragi","Sorry.
If you go, get a fortune on my behalf.");
    MsgDisp("主人公","Ehh∋");
    VoicePlay("S030500002_05_040");
    MsgDisp("Hiiragi","I'd like Excellent Luck please.
Bye then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped......
I'll go alone then.)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030500002_05_050");
    MsgDisp("Hiiragi","Ahh, sorry, I'm out right now......");
    MsgDisp("主人公","Are you working by any chance?");
    VoicePlay("S030500002_05_060");
    MsgDisp("Hiiragi","Yes.
Sorry.
Today is a rough day for me.");
    MsgDisp("主人公","I see......that's too bad.");
    VoicePlay("S030500002_05_070");
    MsgDisp("Hiiragi","I'm disappointed too.
I wanted to go to the shrine with you.");
    VoicePlay("S030500002_05_080");
    MsgDisp("Hiiragi","It can't be helped.
I'll send my spirit with you.
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Just the spirit huh......
Hmm, guess I'll go alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
