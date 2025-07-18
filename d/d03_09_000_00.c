BGOpen("wf200",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I had a nice interview today so I went
ahead and bought a drink from that new
cafe.)");
MsgDisp("主人公","(Okay, that bench over there...)");
SEPlay("EV_SE_685");
SEPlay("EV_SE_593");
ScrQuake(1);
MsgDisp("主人公","(Noo, my bag is about to fall∋
Ahh, my drink is falling too——)");
VoicePlay("D030900000_09_000");
MsgDisp("Kuya?","You, watch out.");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_09_01");
StlEye(9,0);
StlMouth(9,0);
BGMPlay("BGM_C09_KUYA_I",0.01);
ScrFadeIn(0);
VoicePlay("D030900000_09_010");
MsgDisp("Kuya?","Ah...");
MsgClose();
ScrFadeOut(0);
StlClose();
SEPlay("EV_SE_505");
MsgDisp("","Smooch");
MsgDisp("主人公","(∋
Just now, my lips...)");
MsgClose();
BGOpen("wf200",0);
MsgClose();
ChOpen(9,35,0,3,2,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D030900000_09_020");
MsgDisp("Kuya?","Are you okay?");
MsgDisp("主人公","S-Sorry!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030900000_09_030");
MsgDisp("Kuya?","Hm?
So are you okay?");
MsgDisp("主人公","Ah, yes!
I'm fine but...
Just now, you and I——");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900000_09_040");
MsgDisp("Kuya?","I got kissed on the cheek.");
MsgDisp("主人公","∈ I'm really sorry!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,1,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030900000_09_050");
MsgDisp("Kuya?","No, no.
It doesn't bother me at all.");
MsgDisp("主人公","I see...");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900000_09_060");
MsgDisp("Kuya?","Your drink spilled a little, huh?");
MsgDisp("主人公","Ah, you're right.
But it's good that only a little bit
spilled.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900000_09_070");
MsgDisp("Kuya?","Yeah.
That's from that new cafe, isn't it?");
MsgDisp("主人公","Yes!
I'm a part-time journalist so I go around
the city gathering information...");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900000_09_080");
MsgDisp("Kuya?","Hmm, you have an interesting job.
Just like me.");
MsgDisp("主人公","Eh?");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900000_09_090");
MsgDisp("Kuya?","Try not to fall anymore then.
It would help if you got into \"fitness\"
and trained your body more.");
MsgDisp("主人公","Ah, okay.
I'll try to be careful...");
ChMotion(9,0,1);
VoicePlay("D030900000_09_100");
MsgDisp("Kuya?","Bye.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(9);
MsgDisp("主人公","(He's gone.
...Ah, I forgot to thank him!)");
MsgSel("Get his name","Let him go");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Excuse me!
What's your name——");
    VoicePlay("D030900000_09_110");
    MsgDisp("Kuya?","Sorry!
But I have something to do, See you later!");
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.4);
    MsgDisp("主人公","Later, huh.
I wonder if I'll see him again...?");
    MsgDisp("主人公","(Anyway...
I kissed that guy.
How embarrassing!)");
    break ;
    case 1:
    MsgDisp("主人公","(I don't know him at all and I'll probably
never see him again.
Even though I kissed him...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
