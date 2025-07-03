BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc722",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year the horticulture club's program
is a cafe. I have to prepare herb tea and
cookies though...)");
    VoicePlay("P630300000_03_000");
    MsgDisp("Honda?","Haaー, how refreshing...");
    MsgClose();
    ChOpen(3,254,0,0,0,-1,-1,0,0);
    MsgDisp("主人公","Ah,｛本多＊＊｝.
Welcome!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoiceEVSPlay(3);
    VoicePlay("P630300000_03_010");
    MsgDisp("Honda","｛主人公｝,
Is it the aroma of fresh herbs I wonder?
It's drawing me in.");
    MsgDisp("主人公","Then, in the meantime, 
how about some tea and cookies?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("P630300000_03_020");
    MsgDisp("Honda","Yep yep, sounds good!
Let's have a break.");
    MsgDisp("主人公","Certainly!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year the horticulture club's program
is a cafe. I have to prepare herb tea and
cookies though...)");
    MsgClose();
    ChOpen(3,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P630300000_03_030");
    MsgDisp("Honda","｛主人公｝,
Good work.");
    MsgDisp("主人公","Ah,｛本多＊＊｝.
Welcome!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("P630300000_03_040");
    MsgDisp("Honda","Haaー,that's a nice smell.
This feels like another world, huh.");
    MsgDisp("主人公","Hehe, that's the relaxing effect.
How about some herbal tea
and some homemade cookies?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P630300000_03_050");
    MsgDisp("Honda","Sounds good!
I'll have some.");
    MsgDisp("主人公","Yes, seat for one.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
