BGOpen("fp720",0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I150300000_03_000");
    MsgDisp("Honda","Ah, I thought so.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝?
Welcome.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I150300000_03_010");
    MsgDisp("Honda","Wow, that apron suits you!");
    MsgDisp("主人公","Oh, really?
Thanks.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I150300000_03_020");
    MsgDisp("Honda","Yeah yeah, that smile ups your ability to
attract customers.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I150300000_03_030");
    MsgDisp("Honda","Well, see you!");
    MsgDisp("主人公","(Huh, that's it?
Did ｛本多＊＊｝ just come to cheer me on?)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I150300000_03_040");
    MsgDisp("Honda","Hi there.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝, welcome.
Are you looking for something?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I150300000_03_050");
    MsgDisp("Honda","I was just passing through, and I saw you
in the store.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I150300000_03_060");
    MsgDisp("Honda","Then, trying to see what was going on, I
just came in.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("I150300000_03_070");
    MsgDisp("Honda","Ah, but I feel bad leaving without buying
anything...");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I150300000_03_080");
    MsgDisp("Honda","Ah, this looks useful!
I was just thinking of getting a notebook
to jot down my thoughts on my walk.");
    MsgDisp("主人公","(Hehe, I'm glad he found something he
liked!)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoiceEVSPlay(3);
    VoicePlay("I150300000_03_090");
    MsgDisp("Honda","｛主人公｝.
You here?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝, welcome.
What is it today?");
    ChEye(3,4);
    ChMotion(3,3,1);
    ChMotion(3,1,1);
    VoicePlay("I150300000_03_100");
    MsgDisp("Honda","I just wanted to see you working.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("I150300000_03_110");
    MsgDisp("Honda","...Ah, that product! It was in a magazine
my younger sis was reading. So it's
already in stock.");
    MsgDisp("主人公","Hehe, thanks!");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I150300000_03_120");
    MsgDisp("Honda","Hm, it doesn't really stand out over
there, so maybe you could add a
recommendation or adjust the layout?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I150300000_03_130");
    MsgDisp("Honda","I think it'll appeal to more customers
that way.");
    MsgDisp("主人公","I see.
I'll talk to my manager about it.
Thanks!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I150300000_03_140");
    MsgDisp("Honda","No problem!
Well, keep up the good work.");
    MsgDisp("主人公","(...Hm? Did he really just come here to
give me advice? ｛本多＊＊｝ is so kind...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
