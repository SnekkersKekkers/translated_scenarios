BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(Seems like I'm calmer this year.
Maybe this is thanks to me working hard
these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P530700002_07_000");
    MsgDisp("Mikage","You seem relaxed.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P530700002_07_010");
    MsgDisp("Mikage","I came to see your nervous face,
but I'm disappointed.");
    MsgDisp("主人公","Hey. I'm nervous since it's my last
performance.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700002_07_020");
    MsgDisp("Mikage","You can continue after you graduate.
Don't say it's the last.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700002_07_030");
    MsgDisp("Mikage","Ah, but... It might be Vice Principal
Himuro's last time conducting? So repay
him with a good performance.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Alright! I'll have to let both
Himuro-sensei and ｛御影＊＊｝ listen to
the culmination of my performances!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Seems like I'm calmer this year.
Maybe this is thanks to me working hard
these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P530700002_07_040");
    MsgDisp("Mikage","Oh, that's a nice expression.");
    MsgDisp("主人公","Ah,｛御影＊＊｝!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700002_07_050");
    MsgDisp("Mikage","I thought you'd be a bit more nervous, 
but it's impressive.");
    MsgDisp("主人公","Yes. I did everything I could for the last
three years.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700002_07_060");
    MsgDisp("Mikage","As expected of my student.");
    MsgDisp("主人公","Hehe, my advisor is Himuro-sensei.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P530700002_07_070");
    MsgDisp("Mikage","I'm your homeroom teacher. ");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P530700002_07_080");
    MsgDisp("Mikage","Then I guess I won't have a chance
to encourage you or 
relieve your stress.");
    MsgDisp("主人公","Ummm...
Then, please encourage me.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700002_07_090");
    MsgDisp("Mikage","...Haaa
Then, instead of thanking you, 
I'll thank you.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P530700002_07_100");
    MsgDisp("Mikage","I only get scolded by Himuro-sensei, but 
Thanks to you, I can hold my head high in 
front of him, You're even the heart 
of the concert band.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("P530700002_07_110");
    MsgDisp("Mikage","Alright, everyone is waiting.
Put them at ease with your smile.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Alright!
I have to show them the culmination 
of my hard work!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(7,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
