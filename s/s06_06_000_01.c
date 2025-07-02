switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S060600001_06_000");
    MsgDisp("Himuro","Ah, you wore a kimono?");
    MsgDisp("主人公","Does it look strange?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S060600001_06_010");
    MsgDisp("Himuro","Fine feathers make fine birds.");
    MsgDisp("主人公","Uh......");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("S060600001_06_020");
    MsgDisp("Himuro","Well, it's fine for New Years.");
    MsgDisp("主人公","(I guess wearing the kimono was
a good choice, afterall?)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("S060600001_06_030");
    MsgDisp("Himuro","That's nice. It's stunning.");
    MsgDisp("主人公","Ah, you mean the kimono?
Hehe, I tried to wear it well!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S060600001_06_040");
    MsgDisp("Himuro","Yeah, you look like a proper lady.");
    MsgDisp("主人公","(I got a compliment!
I'm so glad I wore my kimono.)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("S060600001_06_050");
    MsgDisp("Himuro","......It's crazy.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S060600001_06_060");
    MsgDisp("Himuro","When you dress up like that, it 
almost feels like you're a completely 
different person.");
    MsgDisp("主人公","Hehe. Is that so?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S060600001_06_070");
    MsgDisp("Himuro","Yeah......
That's how well it suits you.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    ChCheek(6,0);
    VoicePlay("S060600001_06_080");
    MsgDisp("Himuro","I'm kind of proud to be standing
next to you.");
    MsgDisp("主人公","(It seems like he really liked
my kimono. It was worth all the effort♪)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
