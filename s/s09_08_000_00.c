BGOpen("ex050",0);
ChLayout(1);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(8,255,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(8,3,1);
    VoicePlay("S090800000_08_000");
    MsgDisp("Shirahane","Ah, fortunes!");
    MsgDisp("主人公","Oh, you're right.
There are so many people in line......");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("S090800000_08_010");
        MsgDisp("Shirahane","Yeah, that's the standard.");
        MsgDisp("主人公","Yep.");
        break ;
        case 1:
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("S090800000_08_020");
        MsgDisp("Shirahane","Ehー!
You're not going to∋");
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
    ChOpen(8,255,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("S090800000_08_030");
    MsgDisp("Shirahane","Look there, that crowd of people is
probably where they're doing fortunes.");
    MsgDisp("主人公","Fortunes, huh......");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoicePlay("S090800000_08_040");
        MsgDisp("Shirahane","Yeah, let's do it!
I'm sure we'll get to read something nice,
regardless of what the result is.");
        MsgDisp("主人公","Hehe, yeah!");
        break ;
        case 1:
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,2,1);
        VoicePlay("S090800000_08_050");
        MsgDisp("Shirahane","I see......Well we'd be wasting time
waiting in the line, I guess. Let's go.");
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
    ChOpen(8,255,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("S090800000_08_060");
    MsgDisp("Shirahane","Fortunes.");
    MsgDisp("主人公","Ah, you're right.
Do you want to draw one,
｛大地＊＊｝?");
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,2,1);
    VoicePlay("S090800000_08_070");
    MsgDisp("Shirahane","Eh......
What about you?");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(8,1);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("S090800000_08_080");
        MsgDisp("Shirahane","Got it.
Let's go.");
        MsgDisp("主人公","Hey, ｛大地＊＊｝.
Aren't you pretty excited for this?");
        ChMotion(8,3,1);
        VoicePlay("S090800000_08_090");
        MsgDisp("Shirahane","Of course I am. It's the start of the New
Year and I'm here with you. That means I
can't get a bad result!");
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("S090800000_08_100");
        MsgDisp("Shirahane","Lets gooー!");
        break ;
        case 1:
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("S090800000_08_110");
        MsgDisp("Shirahane","Oh......
Yeah, okay then.");
        MsgDisp("主人公","Maybe you actually wanted to pull one?");
        ChMotion(8,4,1);
        VoicePlay("S090800000_08_120");
        MsgDisp("Shirahane","Nah.
I was thinking hard about it.");
        ChEye(8,0);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoicePlay("S090800000_08_130");
        MsgDisp("Shirahane","Alright!
Onto the next!");
        MsgDisp("主人公","(I wonder why he was so worried about
drawing fortunes?)");
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
