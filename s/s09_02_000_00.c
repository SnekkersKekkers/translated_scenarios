BGOpen("ex050",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,0);
    VoicePlay("S090200000_02_000");
    MsgDisp("Sassa","Ooh.
Over there, fortunes!");
    MsgDisp("主人公","Oh, you're right.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S090200000_02_010");
    MsgDisp("Sassa","Want to try our luck?");
    MsgSel("Let's pull fortunes","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("S090200000_02_020");
        MsgDisp("Sassa","Yes!
This way, so we don't trip.");
        MsgDisp("主人公","Yeah, my heart is racing.");
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("S090200000_02_030");
        MsgDisp("Sassa","I see, that may be wise.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("S090200000_02_040");
    MsgDisp("Sassa","Ahh, look.");
    MsgDisp("主人公","Yeah, fortunes.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S090200000_02_050");
    MsgDisp("Sassa","What should we do?
It's right in front of us.");
    MsgSel("Let's pull fortunes","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("S090200000_02_060");
        MsgDisp("Sassa","That's the right answer.
Alright then, ｌａｄｉｅｓ　ｆｉｒｓｔ．");
        MsgDisp("主人公","Ehh?
I'm getting a bit nervous.");
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("S090200000_02_070");
        MsgDisp("Sassa","I see.
You've had enough of the crowds, huh?
Let's go.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,0,0,0,#1,#1,0,0);
    VoicePlay("S090200000_02_080");
    MsgDisp("Sassa","It's a mess with so many moving people.");
    MsgDisp("主人公","Phew......
｛颯砂＊＊｝, thanks for guarding me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S090200000_02_090");
    MsgDisp("Sassa","Any time.");
    MsgDisp("主人公","Yep, thank you.
Hm, over there is really crowded too?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S090200000_02_100");
    MsgDisp("Sassa","That's where they do fortunes......
Do you still have the energy?");
    MsgSel("Let's pull fortunes","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("S090200000_02_110");
        MsgDisp("Sassa","Alright, let's try our luck!
We've got just one shot for the year.");
        MsgDisp("主人公","Yeah, I hope I draw a good one.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("S090200000_02_120");
        MsgDisp("Sassa","It's okay.
Don't give up, even if you don't get a
good one.");
        MsgDisp("主人公","Eh?　But it's just one try......");
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("S090200000_02_130");
        MsgDisp("Sassa","If you're tired, don't push yourself.
We can come back later.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
