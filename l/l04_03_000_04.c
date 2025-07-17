switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300004_03_000");
    MsgDisp("Honda","Amazing!
It's handmade!?");
    MsgDisp("主人公","Hehe, I did my best.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300004_03_010");
    MsgDisp("Honda","It was a lot of work to clean up, right?
My sister and I make a huge mess every
year, so I understand.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300004_03_020");
    MsgDisp("Honda","Thanks for going through the trouble.");
    MsgDisp("主人公","(Thank goodness!
He seemed happy.)");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("L040300004_03_030");
    MsgDisp("Honda","......");
    MsgDisp("主人公","Um... do you not like it?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300004_03_040");
    MsgDisp("Honda","Of course not!
Because it's handmade.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300004_03_050");
    MsgDisp("Honda","I was kind of expecting chocolate from
you, but I didn't think that it'd be
handmade.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300004_03_060");
    MsgDisp("Honda","I was speechless for a bit.
But I love surprises like this.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300004_03_070");
    MsgDisp("Honda","Thanks a lot!");
    MsgDisp("主人公","(Thank goodness!
He seems happy.)");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300004_03_080");
    MsgDisp("Honda","Wah, it's handmade!!");
    MsgDisp("主人公","Yeah, I did my best to make it!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300004_03_090");
    MsgDisp("Honda","Hey hey, am I the only one?
Or are you giving handmade chocolate to
someone else, too?");
    MsgDisp("主人公","It's only you, ｛本多＊＊｝.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300004_03_100");
    MsgDisp("Honda","Da, this is the best!
Then you melted the chocolate and added
toppings just for me, right?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300004_03_110");
    MsgDisp("Honda","It's proof that I have you all to myself.
I'll savor it!");
    MsgDisp("主人公","(Thank goodness!
He seemed happy.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
