BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChNanaType(0);
MsgClose();
ChNanaType(0);
ChOpen(4,30,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("O030400000_04_000");
    MsgDisp("Nanatsumori","First place.
Too easy.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best!)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030400000_04_010");
    MsgDisp("Nanatsumori","Ooh, winning first at the sports
festival...");
    MsgDisp("主人公","Yeah.
We were perfectly in sync!");
    ChEye(4,0);
    VoicePlay("O030400000_04_020");
    MsgDisp("Nanatsumori","I see.
Guess we're compatible?");
    MsgDisp("主人公","I guess so?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("O030400000_04_030");
    MsgDisp("Nanatsumori","Let's pair up again if we want to get
first place in sports.");
    MsgDisp("主人公","(I did it!
I got first place with
｛七ツ森＊｝!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030400000_04_040");
    MsgDisp("Nanatsumori","Seriously, first place at the sports
festival?");
    MsgDisp("主人公","We were perfectly in sync, right?
Yay!");
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("O030400000_04_050");
    MsgDisp("Nanatsumori","Sync, perfect.
Our bodies too, perfect...");
    MsgDisp("主人公","?");
    ChEye(4,2);
    ChMouth(4,5);
    ChMotion(4,1,1);
    ChCheek(4,10);
    VoicePlay("O030400000_04_060");
    MsgDisp("Nanatsumori","Nothing!!
What am I saying...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,2,1);
    ChCheek(4,8);
    VoicePlay("O030400000_04_070");
    MsgDisp("Nanatsumori","I get kinda happy and kinda nervous when
we get along like this. My heart won't
stop pounding...I'm in trouble.");
    MsgDisp("主人公","(｛七ツ森＊｝...?
I'm so happy we won first place!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(4,0);
ChClose(4,0,0);
