BGOpen("ex050",0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoicePlay("S090500000_05_000");
    MsgDisp("Hiiragi","They're doing fortunes over there.
Want to try your luck this year?");
    MsgDisp("主人公","I think you're right.
There are so many people.");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("S090500000_05_010");
        MsgDisp("Hiiragi","Right, there's no other choice.");
        MsgDisp("主人公","Hehe ｛柊＊＊＊｝ likes
fortunes?");
        ChEye(5,0);
        ChMotion(5,3);
        VoicePlay("S090500000_05_020");
        MsgDisp("Hiiragi","Ehh, of course.
You should always try to get the lucky
ones.");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        break ;
        case 1:
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("S090500000_05_030");
        MsgDisp("Hiiragi","That's unfortunate.");
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
    ChOpen(5,255,0,2,4,#1,#1,0,0);
    VoicePlay("S090500000_05_040");
    MsgDisp("Hiiragi","The fortune stand is so popular.");
    MsgDisp("主人公","It really is.
So many people.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("S090500000_05_050");
    MsgDisp("Hiiragi","Are you a puller or a non-puller?");
    MsgSel("I'm a puller!","I'm not a puller...");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("S090500000_05_060");
        MsgDisp("Hiiragi","I'm that type of person too.");
        MsgDisp("主人公","(I hope we get good results!)");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        break ;
        case 1:
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,2);
        VoicePlay("S090500000_05_070");
        MsgDisp("Hiiragi","Ah, that type of person exists.");
        MsgDisp("主人公","(｛柊＊＊＊｝ maybe is the type of person
to pull fortunes.)");
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
    ChOpen(5,255,2,0,4,#1,#1,0,0);
    VoicePlay("S090500000_05_080");
    MsgDisp("Hiiragi","Are you waiting for your turn over there
too?");
    MsgDisp("主人公","Oh, this is the line for drawing fortunes!");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S090500000_05_090");
    MsgDisp("Hiiragi","It seems so.
...Should we get in line too?");
    MsgSel("Let's line up.","I'm tired, let's not");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("S090500000_05_100");
        MsgDisp("Hiiragi","Right.
When you get this far, there's no sense in
backing out.");
        MsgDisp("主人公","Hehe.
Yep.
Which hand should I use to pull?");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("S090500000_05_110");
        MsgDisp("Hiiragi","Let's hold hands until we get there.");
        MsgDisp("主人公","Eh, sure.");
        MsgDisp("主人公","(It's a little embarrassing.)");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        break ;
        case 1:
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,2);
        VoicePlay("S090500000_05_120");
        MsgDisp("Hiiragi","Maybe after a little break then...
Ah, never mind...");
        MsgDisp("主人公","(...
He looks disappointed.
Did I do something wrong?)");
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
