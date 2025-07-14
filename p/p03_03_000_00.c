BGOpen("sc720",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(40,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango..");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChOpen(3,254,5,0,3,0,#1,0,0);
    VoicePlay("P030300000_03_000");
    MsgDisp("Honda","The dango being roasted smells so
good.");
    MsgDisp("主人公","Welcome.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P030300000_03_010");
    MsgDisp("Honda","The smell of the mitarashi paste is the
best too!");
    MsgDisp("主人公","Hehe. ｛本多＊＊｝, are you here to take a
break?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P030300000_03_020");
    MsgDisp("Honda","Yeah. Then, please show me the menu with
the specials.");
    MsgDisp("主人公","Yes, allow me to show you to
your seat!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango.");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChOpen(3,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P030300000_03_030");
    MsgDisp("Honda","｛主人公｝. Wow, matching yukata.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝. Welcome～");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P030300000_03_040");
    MsgDisp("Honda","Yeah, this place really has the feel of a
dango shop.");
    MsgDisp("主人公","Huh? It's a Japanese style cafe. The
signature set is mitarashi dango, though.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,5,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("P030300000_03_050");
    MsgDisp("Honda","What a savory smell......
Is everything handmade?");
    MsgDisp("主人公","Yes, that's right.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P030300000_03_060");
    MsgDisp("Honda","Then, I'll take a mitarashi dango set made
by you.");
    MsgDisp("主人公","Yes, I've received your order～!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
