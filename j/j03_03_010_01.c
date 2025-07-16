Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Oh, it's a phone call from
｛本多＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
｛主人公苗字｝
speaking");
    VoicePlay("J030301001_03_000");
    MsgDisp("Honda","Hey, it's me.
Is this a good time?
For calling me.");
    MsgDisp("主人公","Uh, yeah.
I don't know?");
    VoicePlay("J030301001_03_010");
    MsgDisp("Honda","That's actually what I'm supposed to do.
It can't be another day, can it?");
    MsgDisp("主人公","Is that so.
Then I'll ask you out again?");
    VoicePlay("J030301001_03_020");
    MsgDisp("Honda","That's right..
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad ......)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh, it's a phone call from
｛本多＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛本多＊＊｝?");
    VoicePlay("J030301001_03_030");
    MsgDisp("Honda","Sorry I didn't reply sooner.");
    MsgDisp("主人公","No, it's fine.
So, I don't know?");
    VoicePlay("J030301001_03_040");
    MsgDisp("Honda","It's not possible, I've a prior
commitment......
I was hoping to adjust it somehow.");
    MsgDisp("主人公","Oh, I see.
Never mind?
I'm glad you feel that way.");
    VoicePlay("J030301001_03_050");
    MsgDisp("Honda","Then next time, let's go have fun
together!
Well, I'll see you later?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad......)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's a phone call from
｛本多＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛本多＊＊｝?");
    VoicePlay("J030301001_03_060");
    MsgDisp("Honda","Yeah, I am.
About the voicemail......");
    MsgDisp("主人公","The way it looks, he already had plans?");
    VoicePlay("J030301001_03_070");
    MsgDisp("Honda","That's right.
Bingo.");
    VoicePlay("J030301001_03_080");
    MsgDisp("Honda","......I'm not happy about getting bingo at
all though.");
    MsgDisp("主人公","Sorry for the bad timing.");
    VoicePlay("J030301001_03_090");
    MsgDisp("Honda","What?
Why are you apologizing?
This is no one's fault.");
    VoicePlay("J030301001_03_100");
    MsgDisp("Honda","Okay, well, I'll see you soon.
I'll schedule the next one.
Blow your mind!");
    MsgDisp("主人公","Hmmm, yes.");
    VoicePlay("J030301001_03_110");
    MsgDisp("Honda","Yeah, see you then?
Thanks for the invite!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He had a prior engagement......
Too bad!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
