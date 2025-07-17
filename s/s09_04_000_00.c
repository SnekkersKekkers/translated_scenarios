BGOpen("ex050",0);
ChLayout(1);
ChNanaType(#1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(#1);
    ChOpen(4,255,1,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("S090400000_04_000");
    MsgDisp("Nanatsumori","Are you the type that draws fortunes?");
    MsgDisp("主人公","I...");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_010");
        MsgDisp("Nanatsumori","OK.
Let's line up then.");
        MsgDisp("主人公","Yep!");
        break ;
        case 1:
        ChEye(4,2);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_020");
        MsgDisp("Nanatsumori","Ah, I see...");
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
    ChNanaType(#1);
    ChOpen(4,255,1,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("S090400000_04_030");
    MsgDisp("Nanatsumori","Over there.
Do you want to pull fortunes?");
    MsgDisp("主人公","Uhm...");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_040");
        MsgDisp("Nanatsumori","OK.
We can only do this during New Years,
right?");
        MsgDisp("主人公","Hehe!");
        break ;
        case 1:
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_050");
        MsgDisp("Nanatsumori","Oh...
Next time, then.");
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
    ChNanaType(#1);
    ChOpen(4,255,0,0,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("S090400000_04_060");
    MsgDisp("Nanatsumori","Hm.
What should we do...");
    MsgDisp("主人公","Hm?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("S090400000_04_070");
    MsgDisp("Nanatsumori","Fortunes.
Are you brave enough to give it a try?");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_080");
        MsgDisp("Nanatsumori","Ooh...
So strong.");
        MsgDisp("主人公","Is ｛七ツ森＊｝ afraid of
drawing fortunes?");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("S090400000_04_090");
        MsgDisp("Nanatsumori","How do you think it's possible for such a
little piece of paper to influence your
life for the rest of the year?");
        MsgDisp("主人公","Hehe!");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_100");
        MsgDisp("Nanatsumori","Well, for better or for worse an exciting
life is a fun life.
Let's go!");
        break ;
        case 1:
        ChEye(4,0);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("S090400000_04_110");
        MsgDisp("Nanatsumori","I see.
... When you say it like that, I don't
want to back down.");
        MsgDisp("主人公","Did you want to try?
Let's go.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("S090400000_04_120");
        MsgDisp("Nanatsumori","No.
I feel like it's fate for me to try
especially because you don't want to.");
        MsgDisp("主人公","???");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("S090400000_04_130");
        MsgDisp("Nanatsumori","Never mind, let's move on.");
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
