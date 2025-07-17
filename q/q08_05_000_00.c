BGMStop();
BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    MsgDisp("主人公","Phew, it was so much fun...!
We walked alot.");
    ChMotion(5,4);
    VoicePlay("Q080500000_05_000");
    MsgDisp("Hiiragi","Take a good rest.
Are your feet okay?");
    MsgDisp("主人公","Yes, I'm totally fine.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("Q080500000_05_010");
    MsgDisp("Hiiragi","That's encouraging.
If that's the case, would you mind
spending the next free period with me too?");
    MsgDisp("主人公","Yes.
Let's look around a lot too next time.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q080500000_05_020");
    MsgDisp("Hiiragi","Yes, of course.
Then I'll meet you back here the day after
tomorrow.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("Q080500000_05_030");
    MsgDisp("Hiiragi","Today was fun.
I'm glad I got to go round My first school
trip with you.");
    MsgDisp("主人公","I had fun too!
Thanks for inviting me.");
    ChEye(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("Q080500000_05_040");
    MsgDisp("Hiiragi","If we're both satisfied, I'm glad——");
    ChMouth(5,2);
    ChEyeOpenLevel(5,#1);
    VoicePlay("Q080500000_05_050");
    MsgDisp("Hiiragi","Oh... wait.
Actually, not satisfied.");
    MsgDisp("主人公","Eh?");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("Q080500000_05_060");
    MsgDisp("Hiiragi","I want to have more fun.
So, for the next free period——");
    MsgDisp("主人公","Yeah, let's go together!");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("Q080500000_05_070");
    MsgDisp("Hiiragi","Thank you.
You are too nice...");
    ChEye(5,0);
    ChMotion(5,0,1);
    VoicePlay("Q080500000_05_080");
    MsgDisp("Hiiragi","Well, I'll be here then.
Looking forward to it.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
