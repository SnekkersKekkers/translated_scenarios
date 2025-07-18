SEPlay("EV_SE_663");
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030600000_06_000");
    MsgDisp("Himuro","Hello?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝?
Happy New Year!");
    VoicePlay("S030600000_06_010");
    MsgDisp("Himuro","This is a surprise...
Well then, what can I do for you?");
    MsgDisp("主人公","Uhmm, would you like to visit the shrine
with me?");
    break ;
    case 3:
    VoicePlay("S030600000_06_020");
    MsgDisp("Himuro","Hello?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Happy New Year!");
    VoicePlay("S030600000_06_030");
    MsgDisp("Himuro","You took the time to call me, that's very
considerate of you.
...So, what's up?");
    MsgDisp("主人公","You see...
I was wondering if we could visit the
shrine together.");
    break ;
    case 4:
    case 5:
    VoicePlay("S030600000_06_040");
    MsgDisp("Himuro","Yes, hello?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Happy New Year!");
    VoicePlay("S030600000_06_050");
    MsgDisp("Himuro","...Happy New Year.
You're too cheerful.");
    MsgDisp("主人公","S-Sorry.");
    VoicePlay("S030600000_06_060");
    MsgDisp("Himuro","There's nothing wrong with that.
Hearing that so early in the New Year, it
made me laugh.");
    VoicePlay("S030600000_06_070");
    MsgDisp("Himuro","So, what can I do for you?
...Perhaps this is a shrine invitation?");
    MsgDisp("主人公","Oh, yeah.
Would you like to go?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
