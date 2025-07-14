BGOpen("sc720",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(40,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango～!");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,4,0,#1,#1,0,0,0,60);
    VoicePlay("P030400000_04_000");
    MsgDisp("Nanatsumori","......A yukata.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝! Welcome～!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("P030400000_04_010");
    MsgDisp("Nanatsumori","And, this scent is mitarashi dango.");
    MsgDisp("主人公","You got it!
It's handmade by us, and very popular and
delicious.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P030400000_04_020");
    MsgDisp("Nanatsumori","The yukata effect is strong too.");
    MsgDisp("主人公","Hm?");
    ChMotion(4,1,1);
    VoicePlay("P030400000_04_030");
    MsgDisp("Nanatsumori","Nothing. Then, I'll take what you
recommend.");
    MsgDisp("主人公","Yes!
One dango set, coming right up～!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango～!");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,4,4,#1,#1,0,0,0,60);
    VoicePlay("P030400000_04_040");
    MsgDisp("Nanatsumori","Ah......");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝. Welcome!");
    ChEye(4,0);
    ChMouth(4,2);
    VoicePlay("P030400000_04_050");
    MsgDisp("Nanatsumori","So it was a trap.");
    MsgDisp("主人公","?");
    ChMouth(4,0);
    ChMotion(4,2,1);
    VoicePlay("P030400000_04_060");
    MsgDisp("Nanatsumori","I was drawn here by the sweet smell of
mitarashi paste, and here you are in a
yukata. Escape is impossible.");
    MsgDisp("主人公","Hehe! Would you like the recommended dango
set?");
    ChEye(4,3);
    ChMouth(4,4);
    ChCheek(4,7);
    VoicePlay("P030400000_04_070");
    MsgDisp("Nanatsumori","......Please.");
    MsgDisp("主人公","One dango set, coming right up～!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
