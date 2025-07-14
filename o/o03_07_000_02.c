MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030700002_07_000");
    MsgDisp("Mikage","We were completely treated as a joke.
Sorry.");
    MsgDisp("主人公","(Ugh...... Last, huh......
Too bad......)");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,1);
    VoicePlay("O030700002_07_010");
    MsgDisp("Mikage","Doesn't it feel rewarding to have done our
best until the very end?");
    MsgDisp("主人公","Yes, since we're last......");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030700002_07_020");
    MsgDisp("Mikage","Exactly. But thanks to you, I got a memory
that I won't forget even in 10 years......
right?");
    MsgDisp("主人公","(Hm...... The memory of getting last,
huh...... It's frustrating.)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O030700002_07_030");
    MsgDisp("Mikage","Hey, everyone's super excited, aren't
they?");
    MsgDisp("主人公","Um...... since we're last, I guess
everyone's applause is just loud?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O030700002_07_040");
    MsgDisp("Mikage","Ah, I see.
But this seems like something that would
become a page of my memories.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("O030700002_07_050");
    MsgDisp("Mikage","Is it okay?
I'm taking up a lot of space on the page
of your sports festival memories.");
    MsgDisp("主人公","Hehe.
I'm glad we got to go together.");
    MsgDisp("主人公","(I'm frustrated we got last, but I'm glad
｛御影＊＊｝ was with me in the
three-legged race......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
