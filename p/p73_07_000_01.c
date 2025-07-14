BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P730700001_07_000");
    MsgDisp("Mikage","Heeh, it's splendid, huh.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝! Did you come to see
it?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P730700001_07_010");
    MsgDisp("Mikage","Yes, There's no way I can miss my cute
student's big moment.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P730700001_07_020");
    MsgDisp("Mikage","I mean...
You made that dress right?");
    MsgDisp("主人公","Yes.
...Um how does it look?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P730700001_07_030");
    MsgDisp("Mikage","Oh, it fits you well.
The model is good too, huh?");
    MsgDisp("主人公","I'm glad!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P730700001_07_040");
    MsgDisp("Mikage","That's a nice expression.
Walk with that smile and some confidence,
okay?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("P730700001_07_050");
    MsgDisp("Mikage","Well, it's your turn.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Alーright.
Let's charm both ｛御影＊＊｝ the
audience and the customers.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P730700001_07_060");
    MsgDisp("Mikage","Oh, amazing.
I wondered if it was a princess.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝! I don't know about
princess...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P730700001_07_070");
    MsgDisp("Mikage","Did I go too far?");
    MsgDisp("主人公","Eeh?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P730700001_07_080");
    MsgDisp("Mikage","Haha, it suits you well.
It really brings out your serious charm.");
    MsgDisp("主人公","Serious, huh.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P730700001_07_090");
    MsgDisp("Mikage","Yeah, that's your number one charm point.
A serious and adorable princess?");
    MsgDisp("主人公","｛御影＊＊｝...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P730700001_07_100");
    MsgDisp("Mikage","The, go off and show your charm.");
    MsgDisp("主人公","...Yes!");
    MsgDisp("主人公","(A princess.. huh? Alright, let's try to
conduct myself elegantly!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
