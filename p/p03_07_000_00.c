BGOpen("sc720",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(40,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Thank you for waiting. Here is your
matcha and mitarashi dango～!");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChOpen(7,254,4,0,0,#1,#1,0,0);
    VoicePlay("P030700000_07_000");
    MsgDisp("Mikage","Ooh, pretty busy here.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
It's been a great success.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P030700000_07_010");
    MsgDisp("Mikage","You feel like the daughter of a
dango shop owner. Your strategy of
wearing that is working well.");
    MsgDisp("主人公","It's not just about the clothes,
it's about the taste too, you know?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P030700000_07_020");
    MsgDisp("Mikage","Let's see......
Well then, miss, some dango please.");
    MsgDisp("主人公","One dango set coming right up～!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for waiting. Here is your
matcha and mitarashi dango.");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChOpen(7,254,0,0,3,#1,#1,0,0);
    VoicePlay("P030700000_07_030");
    MsgDisp("Mikage","Woah! Don't you think
our class is the most popular?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Did you come to check on us?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P030700000_07_040");
    MsgDisp("Mikage","No, just thought I'd take a break.
I'll come back a little later
so I'm not in the way.");
    MsgDisp("主人公","No, please feel free to
try our dango!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P030700000_07_050");
    MsgDisp("Mikage","Alright...... Then, miss,
please bring me two or three dango.");
    MsgDisp("主人公","Yes, gladly!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,#1);
ChMouth(7,#1);
