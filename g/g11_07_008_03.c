BGOpen("sc210",0);
ScrFadeIn(0);
MsgDisp("主人公","Sniff sniff......
Hm, maybe it smells a bit like herbs?");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,2,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛御影＊＊｝.
Are you harvesting herbs?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700803_07_000");
MsgDisp("Mikage","Oh, you understood well. I harvested some
good-looking ones just now in the
greenhouse.");
MsgDisp("主人公","It smells nice. I could tell even from
over here.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700803_07_010");
MsgDisp("Mikage","Is that so?
Thanks to that, I worked up a good sweat.");
MsgDisp("主人公","(Ah, ｛御影＊＊｝. If you wipe the sweat
with dirty hands——)");
BGMVol(0.5,2);
while (1){
    RunEverydaySksp(7,0,1,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110700803_07_030");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    MsgDisp("Mikage","My arms and shoulders are stiff～");
    }
VoicePlay("G110700803_07_040");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
MsgDisp("Mikage","Oh, my face is covered in sweat and mud.");
MsgDisp("主人公","Yes, here's a handkerchief.");
VoicePlay("G110700803_07_050");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
MsgDisp("Mikage","Oh, that's touching.");
VoicePlay("G110700803_07_060");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("Mikage","But, I would rather use these gloves than
get your handkerchief dirty.");
MsgDisp("主人公","(Eh?　But it's really okay......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
