ChLayout(1);
MsgClose();
ScrFadeIn(0);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0);
switch (ChPrmGet(4,6)){
    case 3:
    ChEye(4,4);
    ChMouth(4,2);
    VoicePlay("H480400000_04_000");
    MsgDisp("Nanatsumori","Oh......");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Did you come to cheer me on?");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("H480400000_04_010");
    MsgDisp("Nanatsumori","Ah...... yeah?
Yes, that's right.");
    MsgDisp("主人公","?
Did something happen?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChCheek(4,5);
    VoicePlay("H480400000_04_020");
    MsgDisp("Nanatsumori","No, it's just that you're sparkling in a
different way than usual, and I'm not
really sure where to look......");
    MsgDisp("主人公","Hehe.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H480400000_04_030");
    MsgDisp("Nanatsumori","Your visual score is already perfect. All
that's left is...... good luck with your
performance.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(4);
    VoicePlay("H480400000_04_040");
    MsgDisp("Nanatsumori","｛主人公｝.
I came to cheer you on.");
    MsgDisp("主人公","｛七ツ森＊｝!
Thank you.");
    VoicePlay("H480400000_04_050");
    MsgDisp("Nanatsumori","Yeah.");
    ChEye(4,4);
    ChMouth(4,1);
    VoicePlay("H480400000_04_060");
    MsgDisp("Nanatsumori",".........Hm?");
    MsgDisp("主人公","Huh, did something happen?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChCheek(4,5);
    VoicePlay("H480400000_04_070");
    MsgDisp("Nanatsumori","It's just......
You're even prettier than usual.");
    MsgDisp("主人公","I'll start getting shy if you
say stuff like that......");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("H480400000_04_080");
    MsgDisp("Nanatsumori","Aah...... sorry.
But that's my honest opinion. I feel
like I can already see you winning.");
    MsgDisp("主人公","Hehe, really?
I'll do my best in the performance, too!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("H480400000_04_090");
    MsgDisp("Nanatsumori","Yeah, I'll be cheering you on.
In my heart.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
