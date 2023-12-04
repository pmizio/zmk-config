import yaml
import yaml

output = dict()

with open("./build.yaml", "r") as stream:
  data = yaml.safe_load(stream)
  for it in data['include']:
    output[it['board']] = output.get(it['board'], '') + ' ' + it['shield']

for k, v in output.items():
  print(k + ';' + v)
