BGOpen("ex050",0);
ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","There are so many people over there......");
    VoicePlay("S090300000_03_000");
    MsgDisp("Honda","Ah, that's where they're doing fortunes.
A staple of a New Year's shrine visit.");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1,1);
        VoicePlay("S090300000_03_010");
        MsgDisp("Honda","Okay.
Let's do it!");
        MsgDisp("主人公","What will we get?");
        break ;
        case 1:
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,4,1);
        VoicePlay("S090300000_03_020");
        MsgDisp("Honda","Really?
It's fun, though.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S090300000_03_030");
    MsgDisp("Honda","Look, they're doing fortunes over there.");
    MsgDisp("主人公","Uhm......");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3,1);
        VoicePlay("S090300000_03_040");
        MsgDisp("Honda","Right!
Let's see what we get.");
        MsgDisp("主人公","You're really excited, huh?");
        break ;
        case 1:
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4,1);
        VoicePlay("S090300000_03_050");
        MsgDisp("Honda","No- Are you sure?
It's fun waiting a bit......");
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
    MsgDisp("主人公","They are drawing fortunes over there,
right?");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S090300000_03_060");
    MsgDisp("Honda","I'll take you up on that offer!");
    MsgDisp("主人公","Eh?
I didn't mean to invite you though......");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("S090300000_03_070");
    MsgDisp("Honda","Really? Then let me ask you.
Want to try our luck?");
    MsgSel("Yep, let's draw!","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1,1);
        VoicePlay("S090300000_03_080");
        MsgDisp("Honda","Okay! I think I'll get a good one if
you're there.");
        MsgDisp("主人公","Hehe, you think so?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3,1);
        VoicePlay("S090300000_03_090");
        MsgDisp("Honda","I won't back down.
Even if I get Bad Luck, I'll just pretend
it's Good Luck.");
        MsgDisp("主人公","Uhm......");
        break ;
        case 1:
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("S090300000_03_100");
        MsgDisp("Honda","Eh, really? If you don't feel like it,
don't do it then.");
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
