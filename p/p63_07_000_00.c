BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc722",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're doing a herbal tea and
cookie cafe. I think they both turned out
delicious but...)");
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630700000_07_000");
    MsgDisp("Mikage","Yoo, 
how are the customers?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
It's going so-so.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P630700000_07_010");
    MsgDisp("Mikage","I see.
Herbal tea and cookues are delicious, 
so people should gather by word of mouth.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P630700000_07_020");
    MsgDisp("Mikage","Firstly could I indulge in
a little breather first?");
    MsgDisp("主人公","Yes.
A herb tea set coming up～!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're doing a herbal tea and
cookie cafe. I think they both turned out
delicious but...)");
    MsgClose();
    ChOpen(7,254,0,2,0,-1,-1,0,0);
    VoicePlay("P630700000_07_030");
    MsgDisp("Mikage","How is it, how is it?
It's desserted huh?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
There were people who
took a quick peek but....");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P630700000_07_040");
    MsgDisp("Mikage","Don't make that face.
Leave it to me, I'm great 
at drawing in customers.");
    MsgDisp("主人公","Ehhh?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("P630700000_07_050");
    MsgDisp("Mikage","Although I have more responsibilities
than attracting customers.
First, let's taste them.");
    MsgDisp("主人公","Yes.
A herb tea set coming up～!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,-1);
ChMouth(7,-1);
