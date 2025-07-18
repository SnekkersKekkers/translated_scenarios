MsgSel("Yeah, I'm coming!","Uh, sorry about that ...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        VoicePlay("J060101000_01_000");
        MsgDisp("Kazama","Okay, that's settled.
What about the meeting place?");
        MsgDisp("主人公","How about we meet at the
｛待ち合わせ場所｝?");
        VoicePlay("J060101000_01_010");
        MsgDisp("Kazama","Roger that.
I'm looking forward to it.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(An invitation from
｛風真＊＊｝...
Is this a date?)");
        break ;
        case 5:
        VoicePlay("J060101000_01_020");
        MsgDisp("Kazama","Copy that.
Where do you want me to meet you?");
        MsgDisp("主人公","How about we meet at the
｛待ち合わせ場所｝?");
        VoicePlay("J060101000_01_030");
        MsgDisp("Kazama","OK.
Well, we can be wherever we are.
I can see you anywhere, right?");
        MsgDisp("主人公","Hmmm.
You have to be at the meeting point.
Get it?");
        VoicePlay("J060101000_01_040");
        MsgDisp("Kazama","Yes, it's better to see each other right
away.
It's a date, after all.");
        VoicePlay("J060101000_01_050");
        MsgDisp("Kazama","Then I'll look forward to it.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A date with ｛風真＊＊｝....
I'm a little nervous.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        VoicePlay("J060101000_01_060");
        MsgDisp("Kazama","U...
Oh, yeah.
No good?");
        MsgDisp("主人公","Yeah, sorry.
Just a little bit. ...");
        VoicePlay("J060101000_01_070");
        MsgDisp("Kazama","What do you mean \"a little bit\"?");
        MsgDisp("主人公","You don't talk like that anymore ...");
        VoicePlay("J060101000_01_080");
        MsgDisp("Kazama","Yes, yes, yes.
I'll try to figure out what's going on.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He went to the trouble of inviting me,
I'm sorry I did that. ...)");
        break ;
        case 5:
        VoicePlay("J060101000_01_090");
        MsgDisp("Kazama","Okay.");
        MsgDisp("主人公","Um, ...sorry?
Just ...");
        VoicePlay("J060101000_01_100");
        MsgDisp("Kazama","It's fine.
Even though it's not good.");
        VoicePlay("J060101000_01_110");
        MsgDisp("Kazama","I'll make sure I have a plan next time.");
        MsgDisp("主人公","Uh-huh.
See you later?");
        VoicePlay("J060101000_01_120");
        MsgDisp("Kazama","If we can be together, it doesn't matter
where you are....");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Hmmm ...
You went to the trouble of inviting me,
I'm sorry I did that. ...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
