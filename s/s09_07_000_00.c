BGOpen("ex050",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("S090700000_07_000");
    MsgDisp("Mikage","Wow, like expected, the shrine is 
really busy and lively on New years, 
huh.");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,3);
    VoicePlay("S090700000_07_010");
    MsgDisp("Mikage","......What's with that line?");
    MsgDisp("主人公","Must be fortunes, I think...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S090700000_07_020");
    MsgDisp("Mikage","Would you like to try?");
    MsgSel("Let's draw fortunes.","I don't want to");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("S090700000_07_030");
        MsgDisp("Mikage","I wonder what our fortunes
will be this year?");
        MsgDisp("主人公","Yeah!
I hope we get good ones.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        break ;
        case 1:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("S090700000_07_040");
        MsgDisp("Mikage","That's unfortunate......
If you don't want to do it, then it's
best just to ignore it.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 3:
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("S090700000_07_050");
    MsgDisp("Mikage","That maze of people......
That's where they do fortunes, right?");
    MsgDisp("主人公","｛御影＊＊｝ seems to like fortunes");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S090700000_07_060");
    MsgDisp("Mikage","What about you, want to go?");
    MsgSel("Let's draw fortunes.","I don't want to");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,2);
        VoicePlay("S090700000_07_070");
        MsgDisp("Mikage","Right?
We've come all this way, it would be a
waste not to go.");
        MsgDisp("主人公","Hehe. Let's go.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        break ;
        case 1:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("S090700000_07_080");
        MsgDisp("Mikage","I see. Are you getting tired?");
        MsgDisp("主人公","Yeah, a little......");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("S090700000_07_090");
        MsgDisp("Mikage","Sorry, I guess I dragged you
around too much.");
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
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("S090700000_07_100");
    MsgDisp("Mikage","Look, over there.
They're having some event.");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("S090700000_07_110");
    MsgDisp("Mikage","Ah, it looks like fortunes!
Do you want to go?");
    MsgDisp("主人公","Ahh, I think you're right.");
    MsgSel("Let's draw fortunes.","I don't want to");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("S090700000_07_120");
        MsgDisp("Mikage","Good.
My lucky right hand will give me
Excellent Luck, watch.");
        MsgDisp("主人公","Hehe, is it really lucky? ");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("S090700000_07_130");
        MsgDisp("Mikage","Do you know how many healthy
calves I've raised with my right hand?
Leave it to me.");
        MsgDisp("主人公","(｛御影＊＊｝ is so confident!)");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        break ;
        case 1:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("S090700000_07_140");
        MsgDisp("Mikage","Oh, I see.
If you don't like it, then you shouldn't.");
        MsgDisp("主人公","(｛御影＊＊｝, feels like he
really wanted to pull fortunes......
Did I make the wrong choice?)");
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
