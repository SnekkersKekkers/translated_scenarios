BGOpen("sc000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Huh? Over there......is that who I think
it is?)");
BGMPlay("BGM_C09_KUYA_A",0.01);
MsgClose();
ChOpen(9,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Kuya-san!");
ChEye(9,3);
ChMouth(9,0);
ChEyeOpenLevel(9,10);
VoicePlay("D030900900_09_000");
MsgDisp("Kuya","Ah......");
MsgDisp("主人公","Hello.
Is there something going on around here?");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,4,1);
VoicePlay("D030900900_09_010");
MsgDisp("Kuya","......Nope.
I'm wondering where I should go.");
MsgDisp("主人公","Eh?");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,1,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900900_09_020");
MsgDisp("Kuya","Should I just go home?
Or maybe I should go to the library?");
MsgDisp("主人公","Are you maybe worried about choosing
a career?");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900900_09_030");
MsgDisp("Kuya","Yeah.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex280",1);
BGMVol(0.5,2);
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,6);
ScrFadeIn(0);
VoicePlay("D030900900_09_040");
MsgDisp("Kuya","The sea is calm today.");
MsgDisp("主人公","You're right.");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,4,1);
VoicePlay("D030900900_09_050");
MsgDisp("Kuya","I'm the opposite.
I feel very uneasy.");
MsgDisp("主人公","......Why is that?");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900900_09_060");
MsgDisp("Kuya","I'm worried about my career path.");
MsgDisp("主人公","Oh yeah......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900900_09_070");
MsgDisp("Kuya","......Haha. You're really an 
interesting kid, you know? Everytime we 
meet, I'm dazzled by your energy.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,2,1);
VoicePlay("D030900900_09_080");
MsgDisp("Kuya","Sigh......Being with you 
like this all the time, I don't know if 
I would even want to change......");
ChEye(9,3);
ChMouth(9,2);
ChEyeOpenLevel(9,10);
MsgDisp("主人公","Eh......");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900900_09_090");
MsgDisp("Kuya","......The two of us together, huh?");
MsgDisp("主人公","Uhmm, Kuya-san?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900900_09_100");
MsgDisp("Kuya","It's time for us to leave.
I'll walk you home.");
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for bringing me home.
See you later, the——");
ChEye(9,0);
ChMouth(9,4);
VoicePlay("D030900900_09_110");
MsgDisp("Kuya","Wait a second.");
ChMotion(9,4,1);
VoicePlay("D030900900_09_120");
MsgDisp("Kuya","I want to ask you something. It may be a
bit early but......Have you decided on
your career yet?");
MsgDisp("主人公","I......");
MsgSel("I will go to university","I haven't decided yet");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","I'm thinking about going to University.");
    ChEye(9,0);
    ChMouth(9,4);
    ChMotion(9,0,1);
    VoicePlay("D030900900_09_130");
    MsgDisp("Kuya","I see.
Will it be a first-rate university?");
    MsgDisp("主人公","I'm not sure but......I'll try.");
    ChEye(9,0);
    ChMouth(9,0);
    VoicePlay("D030900900_09_140");
    MsgDisp("Kuya","I see.
I've decided, then.");
    MsgDisp("主人公","?");
    ChEye(9,3);
    ChMouth(9,0);
    ChMotion(9,4,1);
    VoicePlay("D030900900_09_150");
    MsgDisp("Kuya","I'll take a gap year.");
    MsgDisp("主人公","Ehh∋");
    ChMotion(9,0,1);
    VoicePlay("D030900900_09_160");
    MsgDisp("Kuya","I'll take a gap year and then try
to attend the same university as you.
A first-rate university.");
    ChEye(9,2);
    ChMouth(9,0);
    ChMotion(9,1,1);
    VoicePlay("D030900900_09_170");
    MsgDisp("Kuya","Right now it's completely
impossible for me. I'm missing
everything I need.");
    MsgDisp("主人公","That......
Do you mean you're going to study hard
from now on?");
    ChEye(9,3);
    ChMouth(9,0);
    ChMotion(9,4,1);
    VoicePlay("D030900900_09_180");
    MsgDisp("Kuya","Yeah.
Then, next spring, I'll enter the same
university as you.");
    ChEye(9,3);
    ChMouth(9,0);
    ChMotion(9,0,1);
    ChEyeOpenLevel(9,6);
    VoicePlay("D030900900_09_190");
    MsgDisp("Kuya","......To be honest with you. I have
such a good time when I'm with you. You
make me feel so fulfilled.");
    ChEye(9,3);
    ChMouth(9,0);
    ChMotion(9,4,1);
    VoicePlay("D030900900_09_200");
    MsgDisp("Kuya","For the two of us being able to
benefit each other and work towards
goals like this, I just want to say
......Thank you.");
    MsgDisp("主人公","It's nothing......");
    ChEye(9,3);
    ChMouth(9,0);
    ChMotion(9,2,1);
    ChEyeOpenLevel(9,0);
    VoicePlay("D030900900_09_210");
    MsgDisp("Kuya","Haha......I guess the being the \"Jack of
All Trades\" will stop for a while. Maybe
we'll become the \"Jack of Studying\"
together instead?");
    MsgDisp("主人公","(This is a surprise but......I want to
support Kuya-san in his goals! I need to
prioritize my \"studies\" over interviews.)");
    break ;
    case 1:
    MsgDisp("主人公","I can't answer that right now.
......Why do you ask?");
    ChEye(9,4);
    ChMouth(9,4);
    ChMotion(9,0,1);
    ChEyeOpenLevel(9,8);
    ChMouthOpenLevel(9,0);
    VoicePlay("D030900900_09_220");
    MsgDisp("Kuya","............");
    ChEye(9,2);
    ChMouth(9,4);
    VoicePlay("D030900900_09_230");
    MsgDisp("Kuya","I was hoping I could set the same
goals as you.");
    ChEye(9,2);
    ChMouth(9,0);
    ChMotion(9,2,1);
    VoicePlay("D030900900_09_240");
    MsgDisp("Kuya","Sigh......
Worrying about a career definitely
doesn't suit me.");
    ChEye(9,0);
    ChMouth(9,4);
    ChMotion(9,0,1);
    ChEyeOpenLevel(9,6);
    VoicePlay("D030900900_09_250");
    MsgDisp("Kuya","......I'm sorry?
Interviews are getting a bit troublesome.
Bye.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(9);
    MsgDisp("主人公","(Haa......
They're getting a bit troublesome for
me too.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
