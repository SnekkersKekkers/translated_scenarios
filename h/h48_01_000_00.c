ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ScrFadeIn(0);
    break ;
    case 3:
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("H480100000_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
You came to cheer us on?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H480100000_01_010");
    MsgDisp("Kazama","Well, yeah......
Actually, how do I even cheer for
rhythmic gymnastics?");
    MsgDisp("主人公","Um, clapping a lot, I guess.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H480100000_01_020");
    MsgDisp("Kazama","If it's just that, then leave it
to me. I'll give you a standing
ovation.");
    MsgDisp("主人公","Yeah!　Thank you.");
    MsgDisp("主人公","(Alright.
I'll have to show ｛風真＊＊｝
a good performance!)");
    MsgClose();
    break ;
    case 4:
    case 5:
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("H480100000_01_030");
    MsgDisp("Kazama","There you are.");
    MsgDisp("主人公","Ah...... ｛風真＊＊｝,
you came to cheer me on?");
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H480100000_01_040");
    MsgDisp("Kazama","What, are you feeling nervous?
With your skill, you'll be great
as usual.");
    MsgDisp("主人公","Yeah, I hope we can get
a good score......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H480100000_01_050");
    MsgDisp("Kazama","Hey, have some confidence.
I won't forgive any judge who gives you
a bad score.");
    MsgDisp("主人公","Huh∋");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H480100000_01_060");
    MsgDisp("Kazama","I'll wrap that ribbon around them.
Okay?");
    MsgDisp("主人公","Hehe, you can't.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H480100000_01_070");
    MsgDisp("Kazama","Yeah, that's the face.
Go on and have fun like usual.");
    MsgDisp("主人公","Yeah!
｛風真＊＊｝, thank you.");
    MsgDisp("主人公","(Alright! I'll have to do my best
so ｛風真＊＊｝ doesn't have to
use my ribbon!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
