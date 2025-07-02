BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last cultural
festival... I have to make it a success!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P730700002_07_000");
    MsgDisp("Mikage","Oh, the bride is in such a place.");
    MsgDisp("主人公","｛御影＊＊｝...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P730700002_07_010");
    MsgDisp("Mikage","What's wrong, you look stressed.
You're a cute bride, you know?
You have to smile brightly.");
    MsgDisp("主人公","Yes. I really want to make this a certain
success.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P730700002_07_020");
    MsgDisp("Mikage","I see.
So it's a feeling that you
want to be happy by all means?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("P730700002_07_030");
    MsgDisp("Mikage","Relax.
You've already been able to become such 
a cute bride. It's already a success.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P730700002_07_040");
    MsgDisp("Mikage","Hey, go out and show everyone 
that dress. If only I saw this,
I might be hit with divine punishment.");
    MsgDisp("主人公","Yes...!");
    MsgDisp("主人公","(I've gotten ｛御影＊＊｝ 's seal of
approval. Alright, let's carry myself with
confidence!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last cultural
festival... I have to make it a success!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P730700002_07_050");
    MsgDisp("Mikage","Oh! Even in such a place, there's a cute
bride.");
    MsgDisp("主人公","Ah,｛御影＊＊｝.
Did you come to support me?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P730700002_07_060");
    MsgDisp("Mikage","I'll be cheering you on 
from the closest spot.");
    MsgDisp("主人公","Eh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P730700002_07_070");
    MsgDisp("Mikage","Is the spot next to the
adorable bride empty?");
    MsgDisp("主人公","Hehe!
For teh show I walk by myself though?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P730700002_07_080");
    MsgDisp("Mikage","Seriously, what a shameー.
Making a bride like this walk by herself.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P730700002_07_090");
    MsgDisp("Mikage","Then I'd be happy to play the role
of coming to steal the bride
during the ceremony?");
    MsgDisp("主人公","It's not a ceremony, 
it's a show!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P730700002_07_100");
    MsgDisp("Mikage","Gotcha.
Then, I'll watch from the audience 
with my fingers in my mouth.");
    MsgDisp("主人公","Hehe, do your best.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("P730700002_07_110");
    MsgDisp("Mikage","Yeah, you have to go show 
everyone this lovely dress.");
    MsgDisp("主人公","(... Thanks to ｛御影＊＊｝,
I feel like I've been able to relax...
Alright, let's have some fun!)");
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
