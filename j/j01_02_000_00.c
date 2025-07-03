BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J010200000_02_000");
    MsgDisp("Sassa","Is something up?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Is now a good time to call you?");
    VoicePlay("J010200000_02_010");
    MsgDisp("Sassa","Yeah, sure.");
    MsgDisp("主人公","Well, uhm, you see......");
    break ;
    case 3:
    VoicePlay("J010200000_02_020");
    MsgDisp("Sassa","Oh, what's up?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Is it OK to call now?");
    VoicePlay("J010200000_02_030");
    MsgDisp("Sassa","Yup. No worries. What's up?");
    MsgDisp("主人公","Well, you see......");
    break ;
    case 4:
    case 5:
    VoicePlay("J010200000_02_040");
    MsgDisp("Sassa","Whoa! Perfect timing!");
    MsgDisp("主人公","｛颯砂＊＊｝?
Is it alright if we talk for a minute?");
    VoicePlay("J010200000_02_050");
    MsgDisp("Sassa","Of course. 
I was just about to call you too..");
    MsgDisp("主人公","Hehe, perfect then!
Well......");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
