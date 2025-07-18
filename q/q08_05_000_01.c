BGMStop();
BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    MsgDisp("主人公","Hah, that was fun!");
    VoicePlay("Q080500001_05_000");
    MsgDisp("Hiiragi","School trips can be a lot of fun, huh?");
    ChEye(5,4);
    VoicePlay("Q080500001_05_010");
    MsgDisp("Hiiragi","It's all thanks to you.
Thank you for inviting me.");
    MsgDisp("主人公","Hehe, no problem.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("Q080500001_05_020");
    MsgDisp("Hiiragi","So, in return.
Would you like to join me for the next
free period?");
    MsgDisp("主人公","Yes, of course.
Let's meet up here tomorrow!");
    ChMotion(5,0);
    VoicePlay("Q080500001_05_030");
    MsgDisp("Hiiragi","Got it.
I'll be waiting here.");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("Q080500001_05_040");
    MsgDisp("Hiiragi","It was fun.
It was thanks to you reaching out to me.");
    MsgDisp("主人公","It's my pleasure!
Thanks, it was fun.");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("Q080500001_05_050");
    MsgDisp("Hiiragi","But the fun's not over yet, right?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q080500001_05_060");
    MsgDisp("Hiiragi","This time from me to you...
May I continue to accompany you during the
next free period?");
    MsgDisp("主人公","Hehe.
Yes, of course!");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    MsgDisp("主人公","Ahh, that was fun!");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("Q080500001_05_070");
    MsgDisp("Hiiragi","It was.
I've gotten used to the free time.");
    MsgDisp("主人公","Eh?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q080500001_05_080");
    MsgDisp("Hiiragi","I'd like to invite you again.
Would you like to join me again for the
free period tomorrow?");
    MsgDisp("主人公","Of course!
I'm looking forward to learning what
tricks you have up your sleeve.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("Q080500001_05_090");
    MsgDisp("Hiiragi","Leave it to me.
I like to set high standards for myself.");
    MsgDisp("主人公","Hehe!
I'll see you here tomorrow then.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
